/*
 * XREFs of sub_1404055F4 @ 0x1404055F4
 * Callers:
 *     sub_1403FEE6C @ 0x1403FEE6C (sub_1403FEE6C.c)
 *     sub_1404053F0 @ 0x1404053F0 (sub_1404053F0.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x140242A20 (KeReadStateSemaphore.c)
 *     sub_140400ACC @ 0x140400ACC (sub_140400ACC.c)
 *     sub_140400AFC @ 0x140400AFC (sub_140400AFC.c)
 *     sub_140400B2C @ 0x140400B2C (sub_140400B2C.c)
 *     sub_140400B5C @ 0x140400B5C (sub_140400B5C.c)
 *     sub_140400B74 @ 0x140400B74 (sub_140400B74.c)
 *     sub_140400BA4 @ 0x140400BA4 (sub_140400BA4.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400BD4 @ 0x140400BD4 (sub_140400BD4.c)
 *     sub_140400C18 @ 0x140400C18 (sub_140400C18.c)
 *     sub_140400C78 @ 0x140400C78 (sub_140400C78.c)
 *     sub_140400C90 @ 0x140400C90 (sub_140400C90.c)
 *     sub_140400CD8 @ 0x140400CD8 (sub_140400CD8.c)
 *     sub_140400D28 @ 0x140400D28 (sub_140400D28.c)
 *     sub_140400D58 @ 0x140400D58 (sub_140400D58.c)
 *     sub_140400D70 @ 0x140400D70 (sub_140400D70.c)
 *     sub_140400D88 @ 0x140400D88 (sub_140400D88.c)
 *     sub_140400DB8 @ 0x140400DB8 (sub_140400DB8.c)
 *     sub_140401338 @ 0x140401338 (sub_140401338.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_1404055F4(
        PRKSEMAPHORE Semaphore,
        PRKSEMAPHORE a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int StateSemaphore; // ebx
  unsigned int v12; // eax
  struct _KSEMAPHORE *v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // r15d
  __int64 v18; // r12
  __int64 v19; // r14
  int v20; // esi
  __int64 v21; // rbp
  int v22; // ebx
  int v23; // eax
  int v24; // esi
  __int64 result; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // r13d
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+38h] [rbp-70h]
  __int64 v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  int v35; // [rsp+58h] [rbp-50h]
  int v36; // [rsp+60h] [rbp-48h]
  int v37; // [rsp+68h] [rbp-40h]
  int v38; // [rsp+B0h] [rbp+8h]
  int v39; // [rsp+B8h] [rbp+10h]

  v39 = (int)a2;
  v38 = (int)Semaphore;
  StateSemaphore = KeReadStateSemaphore(Semaphore);
  v12 = KeReadStateSemaphore(a2);
  v13 = a2;
  if ( StateSemaphore > v12 )
    v13 = Semaphore;
  KeReadStateSemaphore(v13);
  v14 = (unsigned int)sub_140401350();
  v34 = sub_140400BBC();
  sub_140400BBC();
  v33 = sub_140400BBC();
  v32 = sub_140400BBC();
  v15 = (unsigned int)sub_140401350();
  v37 = sub_140400BBC();
  v16 = (unsigned int)sub_140401338();
  v36 = sub_140400ACC();
  v17 = v36;
  v18 = sub_140400C18();
  v19 = v16 + v16 + v15 + v14 + v14 + v14 + v14 + a8;
  v20 = sub_140400ACC();
  v35 = v20;
  v21 = -4 * v14 - 2 * v16 - v15 + a9;
  sub_140400BA4();
  sub_140400BA4();
  sub_140400D28();
  sub_140400D28();
  if ( (unsigned int)sub_140400C90() || (sub_140400C78(v18) & 1) == 0 )
    sub_14056AF38(2017739591LL);
  v22 = sub_140400B2C() - 1;
  v23 = v22 + sub_140400B2C();
  if ( v23 )
  {
    v24 = v23;
    do
    {
      sub_140400D88();
      sub_140400C78(v34);
      sub_140400B74();
      sub_140400B74();
      sub_140400C78(v34);
      sub_140400D88();
      sub_140400B5C();
      sub_140400D88();
      sub_140400B5C();
      sub_140400AFC();
      sub_140400B5C();
      sub_140400D58();
      sub_140400C78(v33);
      sub_140400AFC();
      sub_140400B5C();
      sub_140400D58();
      --v24;
    }
    while ( v24 );
    v20 = v35;
    v17 = v36;
  }
  result = a4;
  if ( a4 )
    result = sub_140400BA4();
  if ( a5 || a6 || a7 )
  {
    sub_140400C18();
    sub_140400BA4();
    v26 = sub_140400C18();
    result = sub_140400DB8(v26, v17, 3, 0, v19, v21);
    if ( a5 )
    {
      sub_140400CD8(v38, v39, a5, v19, v21);
      result = sub_140400BD4(a5, v17, a5, 0, v19, v21);
    }
    if ( a6 )
    {
      v27 = sub_140400C18();
      sub_140400BD4(v39, v17, v27, 0, v19, v21);
      v28 = sub_140400C18();
      sub_140400DB8(v28, v20, 1, 0, v19, v21);
      v29 = v32;
      result = sub_140400BD4(v32, v20, 0, a6, v19, v21);
    }
    else
    {
      v29 = v32;
    }
    if ( a7 )
    {
      sub_140400C18();
      sub_140400BA4();
      v30 = sub_140400C18();
      sub_140400DB8(v30, v20, 1, 0, v19, v21);
      sub_140400CD8(v29, v38, v37, v19, v21);
      sub_140400D70();
      sub_140400BD4(v37, v20, v37, 0, v19, v21);
      sub_140400C18();
      sub_140400BA4();
      v31 = sub_140400C18();
      sub_140400DB8(v31, v20, 1, 0, v19, v21);
      sub_140400BD4(v37, v20, 0, a7, v19, v21);
      sub_140400C18();
      return sub_140400D70();
    }
  }
  return result;
}
