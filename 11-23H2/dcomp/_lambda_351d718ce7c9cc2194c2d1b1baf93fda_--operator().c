/*
 * XREFs of _lambda_351d718ce7c9cc2194c2d1b1baf93fda_::operator() @ 0x180113EB8
 * Callers:
 *     Windows::UI::Composition::CompositionIslandEnvironment::NotifyIslands_NoLock__lambda_351d718ce7c9cc2194c2d1b1baf93fda___ @ 0x180113D98 (Windows--UI--Composition--CompositionIslandEnvironment--NotifyIslands_NoLock__lambda_351d718ce7c.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?NotifyFromEnvironment_ChangeValues_Callback@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z @ 0x180112E48 (-NotifyFromEnvironment_ChangeValues_Callback@CompositionIsland@Composition@UI@Windows@@QEAAXUflo.c)
 */

void __fastcall lambda_351d718ce7c9cc2194c2d1b1baf93fda_::operator()(__int64 *a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdi
  __int64 v6; // xmm0_8
  int v7; // eax
  float v8; // xmm3_4
  float v9; // xmm2_4
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a2 + 24);
  if ( v2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*(Microsoft::WRL2::NestableRuntimeClass **)(a2 + 24));
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a2 + 32) & 2) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( *(int *)(v5 + 88) > 0 && !*(_BYTE *)(v5 + 97) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    v6 = *a1;
    v7 = *((_DWORD *)a1 + 2);
    v8 = *((float *)a1 + 4);
    v9 = *((float *)a1 + 3);
    ++*(_DWORD *)(v5 + 92);
    v10 = v6;
    v11 = v7;
    Windows::UI::Composition::CompositionIsland::NotifyFromEnvironment_ChangeValues_Callback(a2, (float *)&v10, v9, v8);
    --*(_DWORD *)(v5 + 92);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  if ( v2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v2);
}
