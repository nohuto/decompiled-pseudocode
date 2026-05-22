/*
 * XREFs of ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x180129E7C
 * Callers:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x180129DF8 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x18012B5FC (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x18012B908 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 * Callees:
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x18012A4BC (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::EndManipulationInternal(ManipulationInjector *this, unsigned __int8 a2, char a3)
{
  int v4; // r10d
  char v5; // cl
  __int64 v6; // r9
  __int64 v7; // rdx

  v4 = a2;
  v5 = 0;
  if ( !*((_DWORD *)this + 12) )
  {
LABEL_12:
    *((_DWORD *)this + 11) = 0;
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 22) = 0;
    *((_DWORD *)this + 10) = 0;
    *((_BYTE *)this + 744) = 0;
    goto LABEL_13;
  }
  v6 = 0LL;
  do
  {
    v7 = 152LL * (unsigned int)v6;
    if ( a3 || *(_DWORD *)((char *)this + v7 + 124) != 131074 )
    {
      if ( ((*(_DWORD *)((char *)this + v7 + 124) - 65542) & 0xFFFEFFFF) != 0 )
        goto LABEL_9;
      *(_DWORD *)((char *)this + v7 + 124) = (_BYTE)v4 != 0 ? 0x8000 : 0x40000;
    }
    else
    {
      *(_DWORD *)((char *)this + v7 + 124) = v4 << 15;
    }
    v5 = 1;
LABEL_9:
    *((_DWORD *)this + v6 + 178) = 0;
    v6 = (unsigned int)(v6 + 1);
    *((_BYTE *)this + *(unsigned int *)((char *)this + v7 + 116) + 728) = 1;
  }
  while ( (unsigned int)v6 < *((_DWORD *)this + 12) );
  if ( !v5 )
    goto LABEL_12;
  ManipulationInjector::InjectAndScrub(this);
  if ( !*((_DWORD *)this + 12) )
    goto LABEL_12;
LABEL_13:
  if ( *((_BYTE *)this + 13) )
    DbgPrint("EndManipulation\n");
}
