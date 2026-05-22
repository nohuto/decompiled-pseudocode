/*
 * XREFs of ?DisconnectAllSections@SipcPort@@IEAAXXZ @ 0x180119C04
 * Callers:
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x180119A80 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x18011A340 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ?IncreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x18011A940 (-IncreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 */

void __fastcall SipcPort::DisconnectAllSections(SipcPort *this, unsigned int a2)
{
  char *v2; // rdi
  char *i; // rbx
  __int64 v5; // rax

  v2 = (char *)this + 16;
  for ( i = (char *)*((_QWORD *)this + 2); i != v2; i = *(char **)i )
  {
    v5 = (__int64)(i + 48);
    if ( !i )
      v5 = 56LL;
    if ( !*(_BYTE *)v5 )
    {
      *(_BYTE *)v5 = 1;
      SipcPort::IncreaseSectionEventCount(this, a2);
    }
  }
}
