/*
 * XREFs of sub_140675CC0 @ 0x140675CC0
 * Callers:
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_140743E60 @ 0x140743E60 (sub_140743E60.c)
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 *     sub_1409D23E8 @ 0x1409D23E8 (sub_1409D23E8.c)
 * Callees:
 *     sub_1406775C8 @ 0x1406775C8 (sub_1406775C8.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     sub_140843D74 @ 0x140843D74 (sub_140843D74.c)
 */

__int64 __fastcall sub_140675CC0(wchar_t *a1, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  ULONG v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  NTSTATUS v12; // eax
  wchar_t *v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  v8 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 87LL;
  *a4 = 0;
  if ( *a1 && a1[1] )
  {
    *a3 = a1 + 2;
    v9 = sub_1406775C8(a1, 0LL, v13, 0, (__int64)&v14);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v10 = v14;
      if ( !v14 )
      {
        *a3 -= 4LL;
        v12 = sub_140843D74(a1, a2, a3);
        if ( v12 >= 0 || (v8 = RtlNtStatusToDosError(v12)) == 0 )
        {
          if ( *a2 )
            *a4 = 1;
        }
        return v8;
      }
      *a4 = 1;
    }
    *a2 = v10;
    return v8;
  }
  return 1332LL;
}
