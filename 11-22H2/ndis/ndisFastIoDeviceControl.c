/*
 * XREFs of ndisFastIoDeviceControl @ 0x1C0006B40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x1C012CED4 (-ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDEN.c)
 */

char __fastcall ndisFastIoDeviceControl(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        struct _NDIS_CONVERT_IDENTIFIER_OUT *a5,
        int a6,
        int a7,
        __int64 a8,
        _DEVICE_OBJECT *a9)
{
  ULONG64 v10; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  struct _NDIS_CONVERT_IDENTIFIER_OUT *v13; // rdi
  int v14; // eax
  __int128 v15; // [rsp+28h] [rbp-80h] BYREF
  __int128 v16; // [rsp+38h] [rbp-70h]
  __int128 v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+58h] [rbp-50h]
  _OWORD v19[2]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v20; // [rsp+80h] [rbp-28h]

  v10 = (ULONG64)a5;
  if ( a9 != ndisDeviceObject || a7 != 1507511 )
    return 0;
  if ( a4 == 56 && a6 == 40 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    memset(v19, 0, sizeof(v19));
    v20 = 0LL;
    PreviousMode = ExGetPreviousMode();
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = *a3;
      v16 = a3[1];
      v17 = a3[2];
      v18 = *((_QWORD *)a3 + 6);
      a3 = &v15;
      v13 = (struct _NDIS_CONVERT_IDENTIFIER_OUT *)v19;
    }
    else
    {
      v13 = a5;
    }
    v14 = ndisConvertIdentifier(KeGetCurrentThread(), (const struct _NDIS_CONVERT_IDENTIFIER_IN *)a3, v13);
    *(_DWORD *)a8 = v14;
    if ( !v14 )
    {
      if ( PreviousMode )
      {
        if ( (unsigned __int64)a5 >= MmUserProbeAddress )
          v10 = MmUserProbeAddress;
        *(_OWORD *)v10 = *(_OWORD *)v13;
        *(_OWORD *)(v10 + 16) = *((_OWORD *)v13 + 1);
        *(_QWORD *)(v10 + 32) = *((_QWORD *)v13 + 4);
      }
      *(_QWORD *)(a8 + 8) = 40LL;
    }
  }
  else
  {
    *(_DWORD *)a8 = -1073741811;
  }
  return 1;
}
