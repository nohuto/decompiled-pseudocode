/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18002A714
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x18002A9A8 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18002A9EC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18002C078 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180087F50 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qxqq_EventWriteTransfer @ 0x1802484D8 (McTemplateU0qxqq_EventWriteTransfer.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddPrimitives(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *a3)
{
  unsigned int v6; // ebp
  int v7; // edx
  unsigned int v8; // ecx
  __int64 Resource; // r14
  char v10; // bl
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v6 = 0;
  Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 169LL);
  if ( !Resource )
  {
    v13 = 154;
LABEL_10:
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, v13, 0LL);
    return v6;
  }
  if ( *((_DWORD *)a3 + 3) < 0x3Cu )
  {
    v13 = 159;
    goto LABEL_10;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    McTemplateU0qxqq_EventWriteTransfer(
      v8,
      v7,
      *((_DWORD *)a2 + 12),
      (_DWORD)this,
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2));
  v10 = (*(__int64 (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)this + 192LL))(this);
  ReplaceInterface<CSharedSection,CSharedSection>((char *)this + 392, Resource);
  *((_DWORD *)this + 100) = *((_DWORD *)a3 + 3);
  v11 = *((_DWORD *)a3 + 4);
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 101) = v11;
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  CPrimitiveGroup::ResolveSharedMemoryBuffer(this);
  if ( v10 != (*(unsigned __int8 (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)this + 192LL))(this) )
    (*(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 72LL))(this, 3LL);
  return v6;
}
