/*
 * XREFs of ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00C38D8
 * Callers:
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00335E4 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     NtDCompositionCreateConnection @ 0x1C0086440 (NtDCompositionCreateConnection.c)
 *     NtDCompositionDestroyConnection @ 0x1C0209670 (NtDCompositionDestroyConnection.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0023138 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0083A3C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::DestroyHandle(struct HDCOMPOSITIONCONNECTION__ *a1)
{
  DirectComposition::CConnection *v2; // rsi
  struct DirectComposition::CProcessData *v3; // rax
  struct DirectComposition::CProcessData *v4; // rdi
  struct _ERESOURCE *v5; // rbx
  DirectComposition::CConnection *v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // edx

  v2 = 0LL;
  v3 = DirectComposition::CProcessData::Current((__int64)a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = (struct _ERESOURCE *)*((_QWORD *)v3 + 4);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    v6 = (DirectComposition::CConnection *)*((_QWORD *)v4 + 3);
    if ( v6 && a1 == *((struct HDCOMPOSITIONCONNECTION__ **)v4 + 2) )
    {
      *((_QWORD *)v4 + 3) = 0LL;
      v2 = v6;
      v7 = 0;
    }
    else
    {
      v7 = -1073741790;
    }
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 4));
    KeLeaveCriticalRegion();
    if ( v2 )
    {
      DirectComposition::CConnection::Disconnect(v2);
      DirectComposition::CConnection::Release(v2, v8);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v7;
}
