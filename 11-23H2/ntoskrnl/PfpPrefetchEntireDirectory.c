/*
 * XREFs of PfpPrefetchEntireDirectory @ 0x14075EABC
 * Callers:
 *     PfSnPrefetchMetadata @ 0x14075E7D4 (PfSnPrefetchMetadata.c)
 * Callees:
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     PfpOpenHandleCreate @ 0x14075D274 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14075D414 (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x14075D47C (IopQueryXxxInformation.c)
 */

__int64 __fastcall PfpPrefetchEntireDirectory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rsi
  int v13; // edi
  _QWORD *v14; // rdi
  __int64 v16; // [rsp+68h] [rbp-9h] BYREF
  __int64 v17[2]; // [rsp+70h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+Fh] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+27h]

  v16 = 0LL;
  v9 = *(_QWORD *)(a5 + 8);
  v10 = *(_QWORD *)(a5 + 16);
  Handle = 0LL;
  v20 = 0x200000000LL;
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)Object = 0LL;
  v11 = PfpOpenHandleCreate((__int64)&Handle, a1, v10, v9, 1048577, 0x4021u, 0, a2);
  v12 = v20;
  v13 = v11;
  if ( v11 >= 0 )
  {
    if ( a4 )
    {
      v14 = Object[0];
      if ( (int)IopQueryXxxInformation((struct _FILE_OBJECT *)Object[0], 6, 8u, 0, (struct _IRP *)&v16, &a6, 1) >= 0 )
      {
        *(_QWORD *)(a4 + 12) = v16;
        *(_QWORD *)a4 = v14[3];
        *(_DWORD *)(a4 + 8) = v12;
      }
    }
    v13 = IopXxxControlFile(
            Handle,
            0LL,
            0LL,
            0LL,
            (struct _IO_STATUS_BLOCK *)v17,
            0x90120u,
            (char *)a3,
            8 * *(_DWORD *)(a3 + 4) + 16,
            0LL,
            0,
            0);
    if ( v13 >= 0 )
      v13 = 0;
  }
  if ( (v12 & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&Handle, a1);
  return (unsigned int)v13;
}
