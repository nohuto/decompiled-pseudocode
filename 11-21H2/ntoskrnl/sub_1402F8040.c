/*
 * XREFs of sub_1402F8040 @ 0x1402F8040
 * Callers:
 *     <none>
 * Callees:
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402D56F4 @ 0x1402D56F4 (sub_1402D56F4.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407D57AC @ 0x1407D57AC (sub_1407D57AC.c)
 */

NTSTATUS __fastcall sub_1402F8040(void *a1)
{
  NTSTATUS result; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rbx
  volatile __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // di
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rsi
  unsigned __int8 v23; // r15
  struct _KPRCB *v24; // r14
  __int64 v25; // r13
  __int64 v26; // r9
  PVOID v27; // rbx
  int v28; // edx
  __int64 *v29; // rcx
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  __int128 v37; // [rsp+30h] [rbp-38h] BYREF
  __int64 v38; // [rsp+40h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+10h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v38 = 0LL;
  v37 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, qword_140D051A0, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
  if ( result < 0 )
    return result;
  v4 = Object;
  v5 = (volatile __int64 *)*((_QWORD *)Object + 2);
  *((_QWORD *)&v37 + 1) = v5;
  *(_QWORD *)&v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v2 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(v3 + 20);
    *(_DWORD *)(v3 + 20) = v2;
  }
  LOBYTE(v38) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v8 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v30 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 24) = v30 + 1;
      if ( v30 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&v37, v5);
  }
  else if ( _InterlockedExchange64(v5, (__int64)&v37) )
  {
    sub_140311C70(&v37);
  }
  v9 = v4[2];
  v10 = 0;
  if ( *(_BYTE *)(v9 + 33) )
  {
    v12 = 128;
  }
  else
  {
    v11 = *(_DWORD *)(v9 + 24);
    if ( v11 == -1 )
    {
      v12 = -1073741823;
    }
    else
    {
      v12 = 0;
      *(_DWORD *)(v9 + 24) = v11 + 1;
      v13 = v4[2];
      if ( !*(_BYTE *)(v13 + 32) )
      {
        v14 = (__int64 *)Object;
        v10 = 1;
        *(_BYTE *)(v13 + 32) = 1;
        if ( (v14[51] & 0x200) != 0 )
          sub_1402D56F4(v14);
      }
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(&v37, retaddr);
  }
  else
  {
    _m_prefetchw(&v37);
    v15 = v37;
    if ( !(_QWORD)v37 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v37 + 1), 0LL, (signed __int64)&v37) == &v37 )
        goto LABEL_15;
      v15 = sub_140282C20((__int64 *)&v37);
    }
    *(_QWORD *)&v37 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
  }
LABEL_15:
  v16 = KeGetCurrentPrcb();
  v17 = *((_QWORD *)v16 + 4375);
  if ( v17 )
  {
    if ( *((_BYTE *)v16 + 32) <= 1u )
    {
      v31 = *(_DWORD *)(v17 + 24) - 1;
      *(_DWORD *)(v17 + 24) = v31;
      if ( !v31 )
        sub_140418E4C(v16);
    }
  }
  v18 = (unsigned __int8)v38;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v3 = *((_QWORD *)v33 + 4375);
        v16 = (struct _KPRCB *)((unsigned int)(unsigned __int8)v38 + 1);
        v17 = -1LL << ((unsigned __int8)v38 + 1);
        v34 = ~(unsigned __int16)v17;
        v35 = (v34 & *(_DWORD *)(v3 + 20)) == 0;
        v2 = (unsigned int)v34 & *(_DWORD *)(v3 + 20);
        *(_DWORD *)(v3 + 20) = v2;
        if ( v35 )
          sub_140418E4C(v33);
      }
    }
  }
  __writecr8(v18);
  if ( v10 )
  {
    v19 = v4[2];
    v20 = *(_QWORD *)(v19 + 16);
    v21 = *(_QWORD *)(v19 + 8);
    if ( v20 || (LOBYTE(v16) = 1, (v20 = sub_1407D57AC(v16, 0LL)) != 0) )
    {
      *(_QWORD *)(v20 + 24) = 0LL;
      v22 = (_QWORD *)(v21 + 8);
      *(_QWORD *)(v20 + 32) = 0LL;
      *(_DWORD *)(v20 + 40) = 0;
      *(_QWORD *)(v20 + 48) = 0LL;
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v23 <= 0xFu )
      {
        v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v17 = (-1 << (v23 + 1)) & 4u | *(_DWORD *)(v2 + 20);
        *(_DWORD *)(v2 + 20) = v17;
      }
      v24 = KeGetCurrentPrcb();
      v25 = *((_QWORD *)v24 + 1);
      if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
      {
        v36 = sub_14056B1E4(*((_QWORD *)v24 + 1));
        sub_14062DA60(v25, v20, v36);
      }
      sub_1402F3290((volatile signed __int32 *)v21, v17, v2, v3);
      if ( (_QWORD *)*v22 == v22
        || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
        || *(_QWORD *)(v25 + 232) == v21 && *(_BYTE *)(v25 + 643) == 15
        || !sub_1402F6A70((__int64)v24, v21, v20, v26) )
      {
        v28 = *(_DWORD *)(v21 + 4);
        *(_DWORD *)(v21 + 4) = v28 + 1;
        v29 = *(__int64 **)(v21 + 32);
        if ( *v29 != v21 + 24 )
          __fastfail(3u);
        *(_QWORD *)v20 = v21 + 24;
        *(_QWORD *)(v20 + 8) = v29;
        *v29 = v20;
        *(_QWORD *)(v21 + 32) = v20;
        if ( !v28 && (_QWORD *)*v22 != v22 )
          sub_14035B550(v24, v21);
      }
      else
      {
        *(_QWORD *)v20 = 0LL;
      }
      _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
      sub_1402B0820((__int64)v24, 0, 1, 0, v23);
    }
    v27 = Object;
    sub_1402F8420(Object, 0LL);
  }
  else
  {
    v27 = Object;
  }
  ObfDereferenceObjectWithTag(v27, 0x746C6644u);
  return v12;
}
