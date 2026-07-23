/*
 * XREFs of sub_140963B40 @ 0x140963B40
 * Callers:
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14075CB14 @ 0x14075CB14 (sub_14075CB14.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 *     sub_1407ED3AC @ 0x1407ED3AC (sub_1407ED3AC.c)
 *     sub_1409653FC @ 0x1409653FC (sub_1409653FC.c)
 *     sub_1409654F8 @ 0x1409654F8 (sub_1409654F8.c)
 */

__int64 __fastcall sub_140963B40(_WORD *a1, char *a2, unsigned int a3, _DWORD *a4)
{
  ULONG v4; // r15d
  int v6; // ebx
  PVOID v7; // r14
  unsigned int v8; // edi
  char *v9; // r12
  int v10; // eax
  size_t v11; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  size_t v14; // [rsp+38h] [rbp-28h]
  size_t v15; // [rsp+40h] [rbp-20h]
  size_t Size; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  _WORD *v18; // [rsp+58h] [rbp-8h]

  v4 = 0;
  v17 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Size = 0LL;
  v6 = sub_1407ED3AC((__int64)&v17, a1);
  if ( v6 >= 0 )
  {
    if ( (int)sub_14075CB14(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v18,
                &Handle) >= 0 )
    {
      v6 = sub_1409654F8(Handle);
      if ( v6 >= 0 )
      {
        v7 = sub_1402D84BC(v14);
        if ( v7 )
        {
          if ( sub_1402D84BC(v15) )
          {
            v8 = 0;
            v9 = a2;
            while ( 1 )
            {
              v10 = sub_1409653FC(Handle, v4, (__int64)&Size);
              v6 = v10;
              if ( v10 == -2147483622 )
                break;
              if ( v10 < 0 )
                goto LABEL_17;
              v11 = Size;
              v8 += Size;
              if ( v8 <= a3 )
              {
                memmove(v9, v7, Size);
                v9 += v11;
              }
              ++v4;
            }
            *a4 = v8 + 2;
            if ( (unsigned __int64)v8 + 2 <= a3 )
            {
              v6 = 0;
              *(_WORD *)&a2[2 * ((unsigned __int64)v8 >> 1)] = 0;
            }
            else
            {
              v6 = -1073741789;
            }
          }
          else
          {
            v6 = -1073741801;
          }
LABEL_17:
          sub_1402D8494(v7);
        }
        else
        {
          v6 = -1073741801;
        }
      }
    }
    else
    {
      v6 = -1073741275;
    }
    if ( Handle )
    {
      ZwClose(Handle);
      _InterlockedIncrement(&dword_140C2A1BC);
    }
  }
  sub_14075CDC4((__int64)&v17);
  return (unsigned int)v6;
}
