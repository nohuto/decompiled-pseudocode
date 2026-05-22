/*
 * XREFs of ??$_Uninitialized_move@PEAUContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU12@0PEAU12@AEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@0@@Z @ 0x18019C4B0
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCompObjectDiagnosticsPrincipal@@AEBIPEAUHSTRING__@@PEAU2@@?$vector@UContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@QEAAPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU23@AEAPEAV3@AEBI$$QEAPEAUHSTRING__@@3@Z @ 0x18019C13C (--$_Emplace_reallocate@AEAPEAVCompObjectDiagnosticsPrincipal@@AEBIPEAUHSTRING__@@PEAU2@@-$vector.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU12@AEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@0@@Z @ 0x18019C104 (--$_Destroy_range@V-$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUC.c)
 */

CompObjectDiagnosticsPrincipal::Contributor *__fastcall std::_Uninitialized_move<CompObjectDiagnosticsPrincipal::Contributor *>(
        _QWORD *a1,
        _QWORD *a2,
        CompObjectDiagnosticsPrincipal::Contributor *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // rcx

  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    v5 = (char *)(a3 - (CompObjectDiagnosticsPrincipal::Contributor *)a1);
    do
    {
      v6 = v4 - 2;
      *(_QWORD *)a3 = 0LL;
      if ( a3 != (CompObjectDiagnosticsPrincipal::Contributor *)(v4 - 2) )
      {
        *(_QWORD *)a3 = *v6;
        *v6 = 0LL;
      }
      a3 = (CompObjectDiagnosticsPrincipal::Contributor *)((char *)a3 + 32);
      *(_DWORD *)((char *)v4 + (_QWORD)v5 - 8) = *((_DWORD *)v4 - 2);
      *(_QWORD *)&v5[(_QWORD)v4] = *v4;
      v7 = v4[1];
      *v4 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 8) = v7;
      v4[1] = 0LL;
      v4 += 4;
    }
    while ( v4 - 2 != a2 );
  }
  std::_Destroy_range<std::allocator<CompObjectDiagnosticsPrincipal::Contributor>>(a3, a3);
  return a3;
}
