/*
 * XREFs of sub_1406DEC48 @ 0x1406DEC48
 * Callers:
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14079781C @ 0x14079781C (sub_14079781C.c)
 *     sub_1409E0824 @ 0x1409E0824 (sub_1409E0824.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406DEC48(__int64 a1, void *Src, unsigned __int16 a3)
{
  __int16 v4; // ax
  size_t v6; // rsi
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  _RTL_BALANCED_NODE *Node; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0;
  v4 = *(_WORD *)(a1 + 98);
  v6 = a3;
  if ( (v4 & 8) != 0 || (v4 & 1) == 0 )
  {
    v7 = -1073741811;
  }
  else if ( *(_QWORD *)(a1 + 104) )
  {
    v7 = -1073741823;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, (unsigned int)a3 + 28, 1417114693LL);
    Node = (_RTL_BALANCED_NODE *)Pool2;
    if ( Pool2 )
    {
      memmove((void *)(Pool2 + 28), Src, v6);
      v7 = sub_14079781C(0, 0, (int)&v14, a1, Node, v6, (__int64)&stru_140C16020, &stru_140C16060);
      if ( !v7 )
        return v7;
    }
    else
    {
      v7 = -1073741670;
    }
  }
  if ( EtwEventEnabled(qword_140C15FA8, &stru_140014A68) )
    sub_1409E0824(v11, v10, v12, a1, v7);
  return v7;
}
