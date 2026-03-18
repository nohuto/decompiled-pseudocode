/*
 * XREFs of Name @ 0x1C0025D30
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 */

__int64 __fastcall Name(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx

  v2 = (_QWORD *)(a2 + 64);
  result = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             (__int64 *)(a2 + 64),
             0);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == -1073741771 && g_SimulatorCallbackObject )
      return 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 80) + 40LL;
    v6 = *v2 + 64LL;
    if ( v6 != v5 )
    {
      *(_OWORD *)v6 = *(_OWORD *)v5;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(v5 + 16);
      *(_QWORD *)(v6 + 32) = *(_QWORD *)(v5 + 32);
      *(_OWORD *)v5 = 0LL;
      *(_OWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)(v5 + 32) = 0LL;
    }
  }
  return result;
}
