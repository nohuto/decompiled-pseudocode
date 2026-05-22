/*
 * XREFs of ??0ShellHandwritingHostServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180075710
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800360CC (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003ABAC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ShellHandwritingHostServer *__fastcall ShellHandwritingHostServer::ShellHandwritingHostServer(
        ShellHandwritingHostServer *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoShellHandwritingHostServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &ShellHandwritingHostServer::`vftable'{for `IShellHandwritingHostServerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((ShellHandwritingHostServer *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoShellHandwritingHostServerPrincipalImpl::`vftable';
  *(_QWORD *)this = &ShellHandwritingHostServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &ShellHandwritingHostServer::`vftable'{for `IShellHandwritingHostServerPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
