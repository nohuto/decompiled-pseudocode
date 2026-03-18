/*
 * XREFs of BiUpdateObjectReferenceInEfiEntry @ 0x140A5F0A4
 * Callers:
 *     BiCreateEfiEntry @ 0x140A5DDE0 (BiCreateEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _wcsupr @ 0x1403D9D70 (_wcsupr.c)
 *     wcsstr @ 0x1403DBBA0 (wcsstr.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     BcdQueryObject @ 0x140801EF8 (BcdQueryObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140805C78 (BiGetObjectReferenceFromEfiEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiUpdateObjectReferenceInEfiEntry(__int64 a1, __int64 a2)
{
  int ObjectReferenceFromEfiEntry; // ebx
  __int64 v5; // rax
  size_t v6; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v8; // rsi
  wchar_t *v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  GUID v13; // [rsp+40h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(a1, &v13);
  if ( ObjectReferenceFromEfiEntry >= 0 )
  {
    ObjectReferenceFromEfiEntry = BcdQueryObject(a2, 0, 0LL, (__int64)&v12);
    if ( ObjectReferenceFromEfiEntry >= 0 )
    {
      v5 = *(_QWORD *)&v13.Data1 - v12;
      if ( *(_QWORD *)&v13.Data1 == (_QWORD)v12 )
        v5 = *(_QWORD *)v13.Data4 - *((_QWORD *)&v12 + 1);
      if ( v5 )
      {
        v6 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
        Pool2 = (wchar_t *)ExAllocatePool2(258LL, v6, 1262764866LL);
        v8 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, (const void *)(a1 + 48), v6);
          wcsupr(v8);
          v9 = wcsstr(v8, L"BCDOBJECT=");
          if ( v9 )
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            ObjectReferenceFromEfiEntry = RtlStringFromGUIDEx((unsigned int *)&v12, (__int64)&DestinationString, 1);
            if ( ObjectReferenceFromEfiEntry >= 0 )
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
            ObjectReferenceFromEfiEntry = -1073741275;
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
  return (unsigned int)ObjectReferenceFromEfiEntry;
}
