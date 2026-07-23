/*
 * XREFs of VfQueryDispatchTable @ 0x1405FE3E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void *__fastcall VfQueryDispatchTable(int a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // ecx
  void *v5; // rax

  v2 = 0LL;
  if ( !(_QWORD)xmmword_140C1B2B0 && !dword_140C1AA78 )
    return 0LL;
  if ( !a1 )
  {
    v5 = &unk_140C07390;
    if ( (unsigned int)a2 > dword_140C07394 )
      return 0LL;
    return v5;
  }
  v4 = a1 - 2;
  if ( v4 )
  {
    if ( v4 == 1 && (unsigned int)a2 <= dword_140C0736C )
      return &unk_140C07368;
    return (void *)v2;
  }
  if ( qword_140D57628 )
    return (void *)sub_14042A5E0(2LL, a2);
  return (void *)v2;
}
