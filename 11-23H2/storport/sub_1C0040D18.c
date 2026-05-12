/*
 * XREFs of sub_1C0040D18 @ 0x1C0040D18
 * Callers:
 *     sub_1C0062414 @ 0x1C0062414 (sub_1C0062414.c)
 * Callees:
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C0040CEC @ 0x1C0040CEC (sub_1C0040CEC.c)
 *     sub_1C004150C @ 0x1C004150C (sub_1C004150C.c)
 *     sub_1C0061200 @ 0x1C0061200 (sub_1C0061200.c)
 */

void __fastcall sub_1C0040D18(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  KIRQL v8; // r12
  __int64 v9; // rax
  int v10; // edi
  unsigned int v11; // r9d
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v14; // [rsp+88h] [rbp+10h]

  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xBu, (__int64)&unk_1C00898A8, a2, a3);
  }
  if ( a2 && a3 )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    if ( *(int *)(a1 + 24) > 0 || (unsigned int)sub_1C004150C(a1) == 1 )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v8);
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
        && BYTE1(off_1C0093070->Timer) >= 4u )
      {
        LODWORD(v12) = a3;
        sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xCu, (__int64)&unk_1C00898A8, a2, v12);
      }
    }
    else
    {
      if ( a2 == 1 )
      {
        v9 = *(_QWORD *)(a4 + 24);
        if ( v9 )
          v14 = *(_BYTE *)(v9 + 56);
        else
          v14 = -1;
        v10 = *(_DWORD *)(a4 + 96);
        sub_1C0040CEC(a1);
        if ( (qword_1C0093468 & 0x200) != 0 )
          sub_1C0019E4C(
            *(_QWORD *)(a4 + 24),
            4,
            retaddr,
            BYTE2(v10) | (unsigned __int64)((BYTE1(v10) | (((unsigned __int8)v10 | (v14 << 8)) << 8)) << 8),
            *(int *)(a4 + 680),
            0LL,
            0LL);
      }
      else if ( a2 == 2 )
      {
        sub_1C001A2F4((struct _EX_RUNDOWN_REF *)a1);
        if ( (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF) != 0 )
        {
          v11 = (unsigned __int64)(a3 * (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF)) / 0x64;
          if ( !v11 )
            v11 = 1;
          *(_DWORD *)(a1 + 28) = v11;
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
            && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
            && BYTE1(off_1C0093070->Timer) >= 3u )
          {
            sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xDu, (__int64)&unk_1C00898A8, v11);
          }
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v8);
      if ( a2 == 1 )
      {
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
          && BYTE1(off_1C0093070->Timer) >= 3u )
        {
          sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xEu, (__int64)&unk_1C00898A8, a3);
        }
        sub_1C0061200(a4, a3);
      }
    }
  }
}
