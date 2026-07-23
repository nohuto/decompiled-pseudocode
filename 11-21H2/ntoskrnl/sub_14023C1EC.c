/*
 * XREFs of sub_14023C1EC @ 0x14023C1EC
 * Callers:
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14023C5D4 @ 0x14023C5D4 (sub_14023C5D4.c)
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14023C1EC(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // r14
  int v4; // r9d
  unsigned __int64 v5; // r13
  BOOLEAN v6; // bl
  __int64 result; // rax
  LONGLONG QuadPart; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rbx
  struct _KEVENT *v11; // rcx
  __int64 v12; // r8
  char v13; // [rsp+30h] [rbp-78h] BYREF
  LONGLONG v14; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v16; // [rsp+50h] [rbp-58h]
  _OWORD v17[5]; // [rsp+58h] [rbp-50h] BYREF

  v2 = a2;
  v14 = 0LL;
  v17[0] = 0LL;
  v15[0] = 0LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v5 = sub_14027A1B4();
  v15[1] = v5;
  if ( (v2->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v2->QuadPart;
  v14 = v2->QuadPart;
  v2 = (LARGE_INTEGER *)&v14;
  if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
  {
    v9 = 4096 - (QuadPart & 0xFFF);
    v16 = (void *)sub_140328180(a1, QuadPart, (unsigned int)v15, (unsigned int)&v13, 1, 0);
    memset(v16, 0, v9);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      sub_14033D860(v16, 1LL);
      LOBYTE(v12) = 1;
      sub_14023C5D4(a1, 0x20000LL, v12);
    }
    else
    {
      sub_14029D860(a1, &v14, v9, 0LL);
    }
    v14 = v9 + QuadPart;
    v10 = *(_QWORD *)(v15[0] + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v15[0] + 16LL)) )
    {
      v11 = *(struct _KEVENT **)(v10 + 184);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 544));
    }
    goto LABEL_3;
  }
  sub_140283C50(*(_QWORD *)(v5 + 40), (unsigned int)&v14, 1, v4, (__int64)v17, 0);
  result = LODWORD(v17[0]);
  if ( SLODWORD(v17[0]) >= 0 )
  {
LABEL_3:
    v6 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v5 + 40), v2, 0, 0);
    sub_140230680((signed __int64 *)(a1 + 96), v5, 0x63536343u);
    return v6 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
