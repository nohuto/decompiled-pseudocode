/*
 * XREFs of sub_1403B17EC @ 0x1403B17EC
 * Callers:
 *     sub_1403562C8 @ 0x1403562C8 (sub_1403562C8.c)
 *     sub_1403B1230 @ 0x1403B1230 (sub_1403B1230.c)
 *     sub_1403B1624 @ 0x1403B1624 (sub_1403B1624.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140354B48 @ 0x140354B48 (sub_140354B48.c)
 *     sub_1403565AC @ 0x1403565AC (sub_1403565AC.c)
 *     sub_1403565F8 @ 0x1403565F8 (sub_1403565F8.c)
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 *     sub_1403567F8 @ 0x1403567F8 (sub_1403567F8.c)
 *     sub_1403999AC @ 0x1403999AC (sub_1403999AC.c)
 */

int __fastcall sub_1403B17EC(__int64 a1, int a2, char a3)
{
  __int64 v4; // r15
  KIRQL v6; // al
  unsigned __int8 v7; // r12
  unsigned int v8; // esi
  unsigned int i; // r13d
  __int64 v10; // rdi
  unsigned int v11; // eax
  int result; // eax
  unsigned int j; // edi
  __int64 v14; // rcx
  struct _KEVENT *v15; // rbp
  __int64 v16; // rax

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  v7 = v6;
  v8 = 0;
  for ( i = sub_1403565AC((unsigned int *)a1, 0LL, 3); v8 < *(_DWORD *)(a1 + 180); ++v8 )
  {
    v10 = 208LL * v8 + a1 + 192;
    if ( (*(_BYTE *)(v10 + 16) & 1) != 0 )
    {
      if ( a3 )
      {
        v15 = (struct _KEVENT *)(v10 + 32);
        *(_DWORD *)(v10 + 4 * v4 + 152) = *(_DWORD *)(v10 + 188) - 1;
      }
      else
      {
        sub_1403999AC(v10 + 56, 1, 1, 1, (volatile signed __int32 *)(v10 + 104));
        *(_DWORD *)(v10 + 4 * v4 + 152) = 0;
        v15 = (struct _KEVENT *)(v10 + 32);
        KeResetEvent((PRKEVENT)(v10 + 32));
      }
      sub_140354B48(a1, (unsigned int *)v10, a3);
      v16 = *(_QWORD *)(v10 + 64);
      if ( !a3 )
      {
        if ( *(_DWORD *)v16 )
          *(_BYTE *)(v16 + 16) = 1;
        else
          KeSetEvent(v15, 0, 0);
      }
    }
  }
  sub_1403567F8(a1, 0LL, 3);
  v11 = sub_1403565AC((unsigned int *)a1, 0LL, 3);
  sub_14035666C(i, v11);
  result = sub_1403565F8(a1, 0LL, 1, v7);
  if ( !a3 )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 180); ++j )
    {
      result = j;
      v14 = a1 + 208LL * j;
      if ( (*(_BYTE *)(v14 + 208) & 1) != 0 )
        result = KeWaitForSingleObject((PVOID)(v14 + 224), Executive, 0, 0, 0LL);
    }
  }
  return result;
}
