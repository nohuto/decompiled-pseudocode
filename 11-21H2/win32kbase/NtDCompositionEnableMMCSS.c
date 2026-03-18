/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x1C0211AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00103C4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C0212ECC (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  DirectComposition::CConnection *DefaultConnection; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  struct DirectComposition::CProcessData *v11; // rbp
  struct _ERESOURCE *v12; // rbx
  int v13; // eax
  bool v14; // cl
  int v15; // eax
  unsigned int v16; // edx

  v4 = a1;
  v5 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1, a2, a3, a4);
  if ( DefaultConnection )
  {
    v11 = DirectComposition::CProcessData::Current(v7, v6, v9, v10);
    v12 = (struct _ERESOURCE *)*((_QWORD *)v11 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v12, 1u);
    v13 = *((_DWORD *)v11 + 12);
    if ( v4 )
    {
      if ( v13 != -1 )
      {
        v14 = v13 == 0;
        v15 = v13 + 1;
        goto LABEL_8;
      }
    }
    else if ( v13 )
    {
      v15 = v13 - 1;
      v14 = v15 == 0;
LABEL_8:
      *((_DWORD *)v11 + 12) = v15;
      if ( v14 )
        v5 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, v4);
      goto LABEL_11;
    }
    v5 = -1073741823;
LABEL_11:
    ExReleaseResourceLite(*((PERESOURCE *)v11 + 1));
    KeLeaveCriticalRegion();
    DirectComposition::CConnection::Release(DefaultConnection, v16);
    return v5;
  }
  return (unsigned int)-1073741790;
}
