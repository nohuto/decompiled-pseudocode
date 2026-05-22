/*
 * XREFs of ??1Contributor@CompObjectDiagnosticsPrincipal@@QEAA@XZ @ 0x18019C8BC
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU12@AEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@0@@Z @ 0x18019C104 (--$_Destroy_range@V-$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z @ 0x18019D6D4 (-ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z.c)
 */

void __fastcall CompObjectDiagnosticsPrincipal::Contributor::~Contributor(
        CompObjectDiagnosticsPrincipal::Contributor *this)
{
  CompObjectDiagnosticsPrincipal *v2; // rcx
  CompObjectDiagnosticsPrincipal *v3; // rcx

  v2 = *(CompObjectDiagnosticsPrincipal **)this;
  if ( v2 )
    CompObjectDiagnosticsPrincipal::ForgetContributor(v2, *((_DWORD *)this + 2));
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  v3 = *(CompObjectDiagnosticsPrincipal **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(CompObjectDiagnosticsPrincipal *))(*(_QWORD *)v3 + 8LL))(v3);
  }
}
