/*
 * XREFs of ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1C0009C88
 * Callers:
 *     ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007FB0 (-EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0010FE0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02245C0 (-EmitUpdateCommands@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224A30 (-EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02251E0 (-EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02255B0 (-EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02256A0 (-EmitUpdateCommands@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000B6D8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CResourceMarshalerArrayBase::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // r15d
  __int64 v12; // rcx
  bool v13; // r13
  void *v14; // rbp
  unsigned __int64 v15; // rbp
  char *v16; // rcx
  _DWORD *v17; // r8
  unsigned __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v7 = a5;
  if ( (*a4 & a5) != 0 )
  {
    *a4 &= ~a5;
    v12 = *a1;
    v13 = a1[2] == 0LL;
    while ( a1[2] != v12 || v13 )
    {
      v13 = 0;
      v14 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
      v22 = v14;
      if ( (unsigned __int64)v14 < 0x14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v22) )
        {
          *a4 |= v7;
          return a1[2] == *a1;
        }
        v14 = v22;
      }
      v15 = ((unsigned __int64)v14 - 16) >> 2;
      if ( a1[2] - *a1 < v15 )
        LODWORD(v15) = *((_DWORD *)a1 + 4) - *a1;
      v22 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v15 + 16), &v22);
      v16 = (char *)v22;
      *(_DWORD *)v22 = 4 * v15 + 16;
      v17 = v16 + 16;
      *(_QWORD *)(v16 + 4) = 0LL;
      v18 = (unsigned __int64)&v16[4 * (unsigned int)v15 + 16];
      *((_DWORD *)v16 + 3) = 0;
      v19 = a6;
      if ( *a1 )
        v19 = a7;
      *((_DWORD *)v16 + 1) = v19;
      *((_DWORD *)v16 + 2) = v23;
      *((_DWORD *)v16 + 3) = 4 * v15;
      v20 = *a1;
      if ( (unsigned __int64)v17 < v18 )
      {
        do
        {
          v21 = v20++;
          *v17++ = *(_DWORD *)(*(_QWORD *)(a1[1] + 8 * v21) + 32LL);
        }
        while ( (unsigned __int64)v17 < v18 );
        v20 = *a1;
      }
      v12 = (unsigned int)v15 + v20;
      *a1 = v12;
    }
  }
  return a1[2] == *a1;
}
