/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00DD2FC
 * Callers:
 *     NtDCompositionCreateConnection @ 0x1C02113F0 (NtDCompositionCreateConnection.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00103C4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C00B7EB0 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00B8080 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00DD120 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(
        void *a1,
        struct HDCOMPOSITIONCONNECTION__ **a2,
        __int64 a3,
        __int64 a4)
{
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // edx
  DirectComposition::CConnection *v14; // rsi
  int v15; // edi
  struct HDCOMPOSITIONCONNECTION__ *v16; // rax
  struct DirectComposition::CConnection *v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0LL;
  v6 = DirectComposition::CProcessData::Current((__int64)a1, (__int64)a2, a3, a4);
  v7 = v6;
  if ( v6 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v6 + 4));
    if ( *((_QWORD *)v7 + 3) || !UserIsCurrentProcessDwm(v9, v8, v10, v11) )
    {
      v15 = -1073741790;
    }
    else
    {
      v12 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v18);
      v14 = v18;
      v15 = v12;
      if ( v12 < 0 || (v15 = DirectComposition::CConnection::Connect(v18, a1), v15 < 0) )
      {
        if ( v14 )
          DirectComposition::CConnection::Release(v14, v13);
      }
      else
      {
        *((_QWORD *)v7 + 2) += 4LL;
        v16 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v7 + 2);
        *((_QWORD *)v7 + 3) = v14;
        *a2 = v16;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v7 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v15;
}
