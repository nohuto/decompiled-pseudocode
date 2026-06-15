/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@std@@@std@@QEAA@XZ @ 0x180034100
 * Callers:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180037688 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<_TOKEN_USER>::~unique_ptr<_TOKEN_USER>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
