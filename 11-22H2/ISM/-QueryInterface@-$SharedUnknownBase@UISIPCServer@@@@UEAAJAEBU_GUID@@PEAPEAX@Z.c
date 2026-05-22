/*
 * XREFs of ?QueryInterface@?$SharedUnknownBase@UISIPCServer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801290E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x18001B980 (-AddPublicReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall SharedUnknownBase<ISIPCServer>::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  SharedObjectBase *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r8

  v4 = (SharedObjectBase *)(a1 - 16);
  v5 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data1;
    if ( *a2 == *(_QWORD *)&GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data4;
    if ( v6 )
      goto LABEL_11;
  }
  if ( (a1 & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) == 0 )
  {
LABEL_11:
    if ( a3 )
      *a3 = 0LL;
    return 2147500034LL;
  }
  else if ( a3 )
  {
    SharedObjectBase::AddPublicReference(v4);
    result = 0LL;
    *v9 = v8;
  }
  else
  {
    return 2147500035LL;
  }
  return result;
}
