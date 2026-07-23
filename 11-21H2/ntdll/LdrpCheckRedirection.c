/*
 * XREFs of LdrpCheckRedirection @ 0x1800E1248
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpResolveForwarder @ 0x18003F350 (LdrpResolveForwarder.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrpCompareRedirectedFunction @ 0x1800E1420 (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800E1E68 (LdrpHashAsciizString.c)
 */

__int64 __fastcall LdrpCheckRedirection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  int v7; // eax
  __int128 v8; // xmm0
  unsigned __int64 Root; // rbx
  __int64 v10; // r8
  int v11; // edi
  int v12; // eax
  unsigned __int64 v13; // rax
  _QWORD **v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _UNICODE_STRING RedirectionDllName; // [rsp+58h] [rbp+7h] BYREF
  __int128 v21; // [rsp+68h] [rbp+17h] BYREF
  _OWORD v22[2]; // [rsp+78h] [rbp+27h] BYREF

  v6 = -4530927LL;
  v7 = LdrpHashAsciizString(a3);
  v8 = *(_OWORD *)(a2 + 88);
  Root = (unsigned __int64)LdrpRedirectionTree.Root;
  LODWORD(v22[0]) = v7;
  DWORD1(v22[0]) = *(_DWORD *)(a2 + 264);
  *((_QWORD *)&v22[0] + 1) = v10;
  v22[1] = v8;
  if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 && LdrpRedirectionTree.Root )
    Root = (unsigned __int64)&LdrpRedirectionTree ^ (unsigned __int64)LdrpRedirectionTree.Root;
  v11 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
  while ( Root )
  {
    v12 = LdrpCompareRedirectedFunction(v22, Root);
    if ( v12 < 0 )
    {
      v13 = *(_QWORD *)Root;
      goto LABEL_9;
    }
    if ( v12 <= 0 )
      break;
    v13 = *(_QWORD *)(Root + 8);
LABEL_9:
    if ( v11 && v13 )
      Root ^= v13;
    else
      Root = v13;
  }
  while ( Root && !(unsigned int)LdrpCompareRedirectedFunction(v22, Root) )
  {
    if ( !LdrpRedirectionByFunctionCalloutFunc
      || (unsigned __int8)LdrpRedirectionByFunctionCalloutFunc(*(_QWORD *)(a1 + 80), *(unsigned int *)(Root + 64)) )
    {
      v17 = *(_OWORD *)(a2 + 88);
      v6 = *(_QWORD *)(Root + 56);
      RedirectionDllName = NtCurrentPeb()->ProcessParameters->RedirectionDllName;
      v18 = *(_OWORD *)(a1 + 88);
      v21 = v17;
      v22[0] = v18;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
        297,
        (__int64)"LdrpCheckRedirection",
        2u,
        "Import Redirection: %wZ %wZ!%s redirected to %wZ\n",
        v22,
        &v21,
        a3,
        &RedirectionDllName);
      return v6;
    }
    v14 = *(_QWORD ***)(Root + 8);
    v15 = Root;
    if ( v14 )
    {
      v16 = *v14;
      for ( Root = *(_QWORD *)(Root + 8); v16; v16 = (_QWORD *)*v16 )
        Root = (unsigned __int64)v16;
    }
    else
    {
      while ( 1 )
      {
        Root = *(_QWORD *)(Root + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Root || *(_QWORD *)Root == v15 )
          break;
        v15 = Root;
      }
    }
  }
  return v6;
}
