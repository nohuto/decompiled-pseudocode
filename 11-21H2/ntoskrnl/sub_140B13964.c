/*
 * XREFs of sub_140B13964 @ 0x140B13964
 * Callers:
 *     sub_140B13B7C @ 0x140B13B7C (sub_140B13B7C.c)
 * Callees:
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C46A0 @ 0x1407C46A0 (sub_1407C46A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F8AC @ 0x14082F8AC (sub_14082F8AC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140B13964(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3, int a4)
{
  bool v6; // zf
  unsigned int v8; // ebx
  ULONG_PTR v9; // rax
  unsigned int *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+20h] BYREF

  v16 = 0;
  P[0] = 0LL;
  v21 = 0xFFFFFFFFLL;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v17 = 0xFFFFFFFFLL;
  v8 = a2;
  v18 = 0xFFFFFFFFLL;
  v20 = 0xFFFFFFFFLL;
  v19 = 0xFFFFFFFFLL;
  LOBYTE(v23) = 0;
  if ( v6 )
    v9 = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v17);
  else
    v9 = sub_1406BF400(BugCheckParameter3, a2, &v17);
  if ( !v9 )
    return (unsigned int)-2;
  v10 = (unsigned int *)sub_14082F8AC(BugCheckParameter3, v8, v9, &v16, &v21);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v17);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v17);
  if ( !v10 )
    return (unsigned int)-2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v11 = sub_1406BF400(BugCheckParameter3, a3, &v18);
  else
    v11 = sub_1407C9820(BugCheckParameter3, a3, (unsigned int *)&v18);
  if ( v11 )
  {
    v12 = sub_1406B4108(BugCheckParameter3, v11, a4);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v18);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v18);
    if ( v12 == -1 )
    {
      v14 = *v10;
      goto LABEL_26;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v13 = sub_1406BF400(BugCheckParameter3, v12, &v19);
    else
      v13 = sub_1407C9820(BugCheckParameter3, v12, (unsigned int *)&v19);
    if ( v13 )
    {
      sub_1407C46A0(BugCheckParameter3, v12, v13, &v16, (__int64)P, (__int64)&v23, &v20);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v19);
      else
        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v19);
      if ( P[0] )
      {
        v14 = 1;
        if ( *(_DWORD *)P[0] )
        {
          while ( *((_DWORD *)P[0] + v14) != *v10 )
          {
            if ( ++v14 > *(_DWORD *)P[0] )
              goto LABEL_22;
          }
        }
        else
        {
LABEL_22:
          v14 = -2;
        }
        if ( (_BYTE)v23 )
        {
          ExFreePoolWithTag(P[0], 0);
        }
        else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        {
          sub_1406BF450(BugCheckParameter3, &v20);
        }
        else
        {
          sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v20);
        }
        goto LABEL_26;
      }
    }
  }
  v14 = -2;
LABEL_26:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v21);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v21);
  return v14;
}
