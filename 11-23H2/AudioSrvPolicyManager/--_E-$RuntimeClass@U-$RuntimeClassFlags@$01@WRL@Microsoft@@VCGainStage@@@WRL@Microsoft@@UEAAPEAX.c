/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCGainStage@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180020CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[13] = -1073741823;
  *(_QWORD *)a1 = &CGainStage::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
