/*
 * XREFs of sub_140A212A0 @ 0x140A212A0
 * Callers:
 *     sub_140A1F234 @ 0x140A1F234 (sub_140A1F234.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsupr @ 0x1403E17B0 (_wcsupr.c)
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_140800A38 @ 0x140800A38 (sub_140800A38.c)
 *     sub_140A202A4 @ 0x140A202A4 (sub_140A202A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A212A0(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rax
  SIZE_T v6; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rsi
  wchar_t *v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  GUID v13; // [rsp+40h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  v4 = sub_140A202A4(a1, &v13);
  if ( v4 >= 0 )
  {
    v4 = sub_140800A38(a2, 0, 0LL, (__int64)&v12);
    if ( v4 >= 0 )
    {
      v5 = *(_QWORD *)&v13.Data1 - v12;
      if ( *(_QWORD *)&v13.Data1 == (_QWORD)v12 )
        v5 = *(_QWORD *)v13.Data4 - *((_QWORD *)&v12 + 1);
      if ( v5 )
      {
        v6 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
        v8 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, (const void *)(a1 + 48), v6);
          wcsupr(v8);
          v9 = wcsstr(v8, L"BCDOBJECT=");
          if ( v9 )
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            v4 = sub_1407454A8((unsigned int *)&v12, (__int64)&DestinationString, 1);
            if ( v4 >= 0 )
            {
              memmove(
                (void *)(a1 + 68 + 2 * ((unsigned __int64)(v9 - v8) >> 1)),
                DestinationString.Buffer,
                DestinationString.Length);
              RtlFreeUnicodeString(&DestinationString);
            }
          }
          else
          {
            v4 = -1073741275;
          }
          ExFreePoolWithTag(v8, 0x4B444342u);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v4;
}
