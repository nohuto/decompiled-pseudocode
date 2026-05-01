/*
 * XREFs of ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@KKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E134
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DCE8 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     CempLockInitialize @ 0x1800114A4 (CempLockInitialize.c)
 *     CemRcTableInitialize @ 0x180011588 (CemRcTableInitialize.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800748BC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

_OWORD *__fastcall HampClientInitialize(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        const unsigned __int16 **a7,
        unsigned int Size,
        unsigned int a9,
        _QWORD *a10)
{
  __int64 v11; // rbp
  signed __int64 v14; // rax
  _OWORD *result; // rax
  __int128 v16; // xmm0

  v11 = a3;
  memset_0(a10, 0, Size);
  CempLockInitialize((__int64)(a10 + 5));
  *a10 = 0LL;
  a10[1] = 0LL;
  a10[2] = -1LL;
  a10[3] = 1LL;
  a10[4] = 48 * v11 + a1 + 16;
  a10[8] = a10 + 7;
  a10[7] = a10 + 7;
  CemRcTableInitialize((__int64)HampClientPkgDestroy, a10 + 9);
  *((_BYTE *)a10 + 164) = v11;
  *((_DWORD *)a10 + 42) = a2;
  v14 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1080));
  *((_DWORD *)a10 + 40) = a4;
  a10[19] = v14;
  *((_WORD *)a10 + 110) = 0;
  *((_DWORD *)a10 + 50) = 0;
  if ( a7 )
  {
    if ( (_BYTE)v11 == 6 )
    {
      *((_DWORD *)a10 + 43) = *(_DWORD *)*a7;
    }
    else if ( !(_BYTE)v11 && *a7 )
    {
      RtlStringCchCopyW((unsigned __int16 *)a10 + 110, a9, *a7);
    }
  }
  result = a5;
  if ( a5 )
  {
    v16 = *a5;
    result = a6;
    *((_DWORD *)a10 + 36) |= 1u;
    *(_OWORD *)(a10 + 15) = v16;
    a10[17] = a6;
  }
  return result;
}
