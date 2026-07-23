/*
 * XREFs of sub_1403ABA40 @ 0x1403ABA40
 * Callers:
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 *     sub_140636DE4 @ 0x140636DE4 (sub_140636DE4.c)
 */

__int64 __fastcall sub_1403ABA40(__int64 a1, __int64 a2)
{
  __int64 ThreadServerSilo; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  v5 = PsGetThreadServerSilo(a2);
  v6 = &unk_140D32580;
  if ( ThreadServerSilo )
    v7 = *(_QWORD **)(ThreadServerSilo + 1464);
  else
    v7 = &unk_140D32580;
  v8 = v7[108];
  if ( v5 )
    v6 = *(_QWORD **)(v5 + 1464);
  v9 = v6[108];
  if ( qword_140D05008 != -4572 && (*(_DWORD *)(qword_140D05008 + 4576) & 4) != 0 )
    sub_140636DE4(a2);
  result = sub_1403ABB10(qword_140D05008, a1, a2);
  if ( ThreadServerSilo == v5 )
  {
    if ( ThreadServerSilo && v8 )
    {
      v11 = a1;
      v12 = v8;
      return sub_1403ABB10(v12, v11, a2);
    }
  }
  else if ( ThreadServerSilo && v8 )
  {
    result = sub_1403ABB10(v8, a1, 0LL);
  }
  if ( v5 && v9 )
  {
    v11 = 0LL;
    v12 = v9;
    return sub_1403ABB10(v12, v11, a2);
  }
  return result;
}
