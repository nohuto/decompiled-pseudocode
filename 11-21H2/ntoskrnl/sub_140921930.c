/*
 * XREFs of sub_140921930 @ 0x140921930
 * Callers:
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C46A0 @ 0x1407C46A0 (sub_1407C46A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140921930(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 a3, ULONG a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // r12d
  PVOID v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // ebx
  struct _LOOKASIDE_LIST_EX *v13; // r9
  PVOID v14; // rax
  int v15; // eax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h] BYREF
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF

  v4 = 0;
  v19 = 0LL;
  v18 = 0LL;
  Src = 0LL;
  LOBYTE(v21) = 0;
  v8 = BugCheckParameter4;
  sub_1407C97FC(&v19);
  v9 = 0LL;
  sub_1407C97FC(&v18);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v10 = sub_1406BF400(BugCheckParameter3, v8, &v18);
  else
    v10 = sub_1407C9820(BugCheckParameter3, v8, (unsigned int *)&v18);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741670;
  LODWORD(NumberOfBytes) = 0;
  if ( !*(_DWORD *)(v10 + 4) )
    goto LABEL_12;
  if ( sub_1407C46A0(BugCheckParameter3, v8, v10, (unsigned int *)&NumberOfBytes, (__int64)&Src, (__int64)&v21, &v19) )
  {
    v4 = NumberOfBytes;
    if ( (_DWORD)NumberOfBytes )
    {
      v14 = Allocate(PagedPool, (unsigned int)NumberOfBytes, a4, v13);
      v9 = v14;
      if ( !v14 )
        goto LABEL_8;
      memmove(v14, Src, v4);
    }
LABEL_12:
    v15 = *(_DWORD *)(v11 + 12);
    *(_DWORD *)(a3 + 4) = v4;
    v12 = 0;
    *(_DWORD *)a3 = v15;
    *(_QWORD *)(a3 + 8) = v9;
    goto LABEL_13;
  }
LABEL_8:
  v12 = -1073741670;
LABEL_13:
  if ( Src )
  {
    if ( (_BYTE)v21 )
    {
      ExFreePoolWithTag(Src, 0);
    }
    else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    {
      sub_1406BF450(BugCheckParameter3, &v19);
    }
    else
    {
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v19);
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v18);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v18);
  return v12;
}
