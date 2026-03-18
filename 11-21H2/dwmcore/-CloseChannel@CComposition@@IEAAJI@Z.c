/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005E6E4
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180060EC0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180193334 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18005E6AC (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ??$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z @ 0x18006119C (--$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1800BD9BC (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800BDCA4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800DC2C8 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x180193898 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // rbp
  int AttachedChannel; // eax
  unsigned int v5; // ecx
  unsigned int v6; // esi
  CResourceTable **v7; // rdi
  struct CComposition *v8; // rdx
  __int64 *v9; // rdi
  char v10; // r8
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v16; // rcx
  struct CChannelContext *v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v17);
  v6 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, AttachedChannel, 0x7C9u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 82) + 88LL))(*((_QWORD *)this + 82), (unsigned int)v2);
    v7 = (CResourceTable **)v17;
    if ( *((_BYTE *)v17 + 72) )
    {
      *((_BYTE *)v17 + 72) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)this + 68, &v17) )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
    CResourceTable::ReleaseHandleTableEntries(v7[4], v8, (struct CChannelContext *)v7);
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
    ReleaseInterface<CChannelContext>(&v17);
    v9 = (__int64 *)((char *)this + 440);
    v10 = 0;
    *(_QWORD *)(*((_QWORD *)this + 55) + 8 * v2) = 0LL;
    v11 = *((_DWORD *)this + 116);
    if ( v11 )
    {
      do
      {
        v12 = *((_DWORD *)this + 116);
        v13 = *v9;
        v14 = v12 - 1;
        if ( *(_QWORD *)(*v9 + 8 * v14) )
          break;
        v16 = (unsigned int)(v11 - 1);
        if ( (unsigned int)v16 >= v12 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x19Cu, 0LL);
        }
        else
        {
          if ( (unsigned int)v16 < (unsigned int)v14 )
          {
            do
            {
              *(_QWORD *)(v13 + 8 * v16) = *(_QWORD *)(v13 + 8LL * (unsigned int)(v16 + 1));
              v16 = (unsigned int)(v16 + 1);
              v12 = *((_DWORD *)this + 116);
            }
            while ( (unsigned int)v16 < v12 - 1 );
          }
          *((_DWORD *)this + 116) = v12 - 1;
        }
        v11 = *((_DWORD *)this + 116);
        v10 = 1;
      }
      while ( v11 );
      if ( v10 )
        DynArrayImpl<1>::ShrinkToSize((char *)this + 440, 8LL);
    }
  }
  return v6;
}
