/*
 * XREFs of sub_1409ACBA0 @ 0x1409ACBA0
 * Callers:
 *     sub_1409ABC00 @ 0x1409ABC00 (sub_1409ABC00.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsGetProcessSessionId @ 0x14028AF60 (PsGetProcessSessionId.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 */

int __fastcall sub_1409ACBA0(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  void *i; // r9
  int v5; // edx
  unsigned int ProcessSessionId; // eax
  _QWORD *v7; // rax
  void *v8; // rbx
  void *v9; // rax
  __int64 v10; // rcx
  void *v11; // r8
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  sub_1406FF880(a1, 0, (int)sub_1409B0FC0, 0, (__int64)&v15, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v8 )
  {
    v7 = sub_1406CA970((__int64)a1, (__int64)CurrentThread, &v13, i);
    v8 = v7;
    if ( !v7 )
      break;
    v5 = *((_DWORD *)v7 + 543);
    if ( ((v5 & 0x40) != 0 || (v7[140] & 1) == 0) && (v5 & 0x1000) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionId((__int64)v7);
      if ( ProcessSessionId != ServerSiloServiceSessionId )
        sub_1409AC388((__int64)a1, ProcessSessionId, v8);
    }
  }
  v9 = sub_140204738((__int64)a1);
  v11 = (void *)*((_QWORD *)v9 + 110);
  if ( v11 )
    LODWORD(v9) = sub_1409AC388(v10, **((_DWORD **)v9 + 165), v11);
  return (int)v9;
}
