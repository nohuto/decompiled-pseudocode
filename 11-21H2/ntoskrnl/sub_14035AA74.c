/*
 * XREFs of sub_14035AA74 @ 0x14035AA74
 * Callers:
 *     sub_1407A7658 @ 0x1407A7658 (sub_1407A7658.c)
 *     sub_1407AC6B0 @ 0x1407AC6B0 (sub_1407AC6B0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14035AB2C @ 0x14035AB2C (sub_14035AB2C.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 */

int __fastcall sub_14035AA74(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  void *v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      LOBYTE(a3) = 1;
      LOBYTE(a2) = *(_BYTE *)(a1 + 59);
      LODWORD(v6) = sub_14035AB2C(v5, a2, a3);
    }
    else
    {
      LOBYTE(v4) = (_BYTE)a2 != 0;
      LODWORD(v6) = sub_14035AD70(*(PVOID *)(v5 + 248), v4);
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = (void *)(v6 + 1240);
      if ( (_BYTE)a2 )
        LODWORD(v6) = sub_14035AD70(v7, (_BYTE)a3 != 0 ? 1 : 5);
      else
        LODWORD(v6) = sub_14035AD70(v7, 2);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( (v8 & 1) != 0 )
      {
        if ( v8 >= 4 )
        {
          LODWORD(v6) = KeSetEvent((PRKEVENT)(v8 & 0xFFFFFFFFFFFFFFFCuLL), 0, a2);
          v9 = *(_QWORD *)(a1 + 40);
          if ( (v9 & 2) != 0 )
            LODWORD(v6) = ObfDereferenceObject((PVOID)(v9 & 0xFFFFFFFFFFFFFFFCuLL));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  return v6;
}
