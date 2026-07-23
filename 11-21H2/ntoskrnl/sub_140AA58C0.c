/*
 * XREFs of sub_140AA58C0 @ 0x140AA58C0
 * Callers:
 *     sub_140AA43E0 @ 0x140AA43E0 (sub_140AA43E0.c)
 *     sub_140AA4410 @ 0x140AA4410 (sub_140AA4410.c)
 * Callees:
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140AA59E0 @ 0x140AA59E0 (sub_140AA59E0.c)
 */

char __fastcall sub_140AA58C0(unsigned int a1, ULONG_PTR *a2, char a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rbp
  int v9; // eax
  ULONG_PTR v10; // rdx
  int v11; // esi
  __int64 v12; // rdi
  ULONG_PTR v13; // rbx
  ULONG_PTR v15; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v16[2]; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  v16[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = a1;
  if ( (*((_DWORD *)CurrentThread + 29) & 4) != 0 )
    LOBYTE(v9) = *((_BYTE *)CurrentThread + 390);
  else
    LOBYTE(v9) = KeGetCurrentIrql();
  if ( (unsigned __int8)v9 <= 2u )
  {
    if ( (_BYTE)v9 != 2 )
      goto LABEL_12;
    if ( a4 )
    {
      if ( !*a4 )
        goto LABEL_12;
      v10 = 290LL;
    }
    else
    {
      v10 = 289LL;
    }
  }
  else
  {
    v10 = 288LL;
  }
  LOBYTE(v9) = sub_140A8C924(0xC4u, v10, (unsigned __int8)v9, *a2, (__int64)a4);
LABEL_12:
  if ( a3 == 1 && (!a4 || *a4) && (v9 = *((_DWORD *)CurrentThread + 30), (v9 & 0x40) != 0) )
  {
    LOBYTE(v9) = sub_1402AB970((__int64)&v15, (__int64)v16);
    v11 = (unsigned __int8)v9;
  }
  else
  {
    v11 = 0;
  }
  if ( (_DWORD)v8 )
  {
    v12 = v8;
    do
    {
      v13 = *a2;
      LOBYTE(v9) = sub_140AA59E0(*a2);
      if ( v11 && v13 >= v15 && v13 < v16[0] )
        LOBYTE(v9) = sub_140A8C924(0xC4u, 0x123uLL, v13, 0LL, 0LL);
      ++a2;
      --v12;
    }
    while ( v12 );
  }
  return v9;
}
