/*
 * XREFs of sub_1407B468C @ 0x1407B468C
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407B468C(__int64 a1, __int64 a2, ACL **a3)
{
  unsigned __int8 *v4; // rsi
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v8; // r13
  ULONG v9; // ebp
  ACL *Pool2; // rax
  ACL *v11; // rdi
  void *Src; // [rsp+60h] [rbp+8h]

  v4 = 0LL;
  v5 = 0LL;
  Src = **(void ***)(a2 + 152);
  if ( _bittest((const signed __int32 *)(a2 + 200), 0xEu) )
    v5 = *(unsigned __int8 **)(a2 + 784);
  v8 = **(unsigned __int8 ***)(a1 + 152);
  if ( _bittest((const signed __int32 *)(a1 + 200), 0xEu) )
    v4 = *(unsigned __int8 **)(a1 + 784);
  v9 = 4
     * (*(unsigned __int8 *)(**(_QWORD **)(a2 + 152) + 1LL)
      + v8[1]
      + *((unsigned __int8 *)Group + 1)
      + *((unsigned __int8 *)SidToCheck + 1)
      + *((unsigned __int8 *)qword_140D3CAA8 + 1))
     + 88;
  if ( v4 )
    v9 += 4 * v4[1] + 16;
  if ( v5 )
  {
    if ( v4 && RtlEqualSid(v5, v4) )
      v5 = 0LL;
    else
      v9 += 4 * v5[1] + 16;
  }
  Pool2 = (ACL *)ExAllocatePool2(256LL, v9, 538994003LL);
  v11 = Pool2;
  if ( Pool2 )
  {
    RtlCreateAcl(Pool2, v9, 2u);
    sub_1407B4900((int)v11, 2, 0, 983551, Src, 0);
    sub_1407B4900((int)v11, 2, 0, 983551, v8, 0);
    sub_1407B4900((int)v11, 2, 0, 983551, SidToCheck, 0);
    sub_1407B4900((int)v11, 2, 0, 983551, Group, 0);
    if ( v4 )
      sub_1407B4900((int)v11, 2, 0, 983551, v4, 0);
    if ( v5 )
      sub_1407B4900((int)v11, 2, 0, 983551, v5, 0);
    if ( *(_QWORD *)(a2 + 160) || *(_QWORD *)(a1 + 160) )
      sub_1407B4900((int)v11, 2, 0, 983551, qword_140D3CAA8, 0);
    *a3 = v11;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 3221225626LL;
  }
}
