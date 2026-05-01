/*
 * XREFs of ??_G?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18048C820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::SimpleClassFactory<PenWorkspaceDiscoverBrokerFactory,0>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
