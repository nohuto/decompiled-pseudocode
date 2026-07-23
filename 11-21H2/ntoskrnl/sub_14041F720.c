/*
 * XREFs of sub_14041F720 @ 0x14041F720
 * Callers:
 *     sub_140299E94 @ 0x140299E94 (sub_140299E94.c)
 *     sub_14029AEF0 @ 0x14029AEF0 (sub_14029AEF0.c)
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeSaveStateForHibernate @ 0x140420460 (KeSaveStateForHibernate.c)
 *     sub_14042B7A0 @ 0x14042B7A0 (sub_14042B7A0.c)
 *     sub_140A66050 @ 0x140A66050 (sub_140A66050.c)
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 *     sub_140A6F61C @ 0x140A6F61C (sub_140A6F61C.c)
 *     sub_140A74270 @ 0x140A74270 (sub_140A74270.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14041F720(__int64 _RCX, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // r8
  int v15; // r9d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned int v20; // edx

  v2 = __readcr0();
  *(_QWORD *)_RCX = v2;
  v3 = __readcr2();
  *(_QWORD *)(_RCX + 8) = v3;
  v4 = __readcr3();
  *(_QWORD *)(_RCX + 16) = v4;
  v5 = __readcr4();
  *(_QWORD *)(_RCX + 24) = v5;
  *(_QWORD *)(_RCX + 160) = KeGetCurrentIrql();
  *(_WORD *)(_RCX + 114) = 0;
  v6 = (unsigned __int8)(byte_140D06B14 | byte_140D06888);
  if ( !(_BYTE)v6 )
  {
    __sgdt((void *)(_RCX + 86));
    __sidt((void *)(_RCX + 102));
    __asm { str     word ptr [rcx+70h] }
  }
  *(_DWORD *)(_RCX + 116) = _mm_getcsr();
  *(_QWORD *)(_RCX + 216) = 0LL;
  if ( (*(_QWORD *)(_RCX + 24) & 0x40000LL) != 0 )
  {
    __asm { xgetbv }
    *(_DWORD *)(_RCX + 216) = v6;
    *(_DWORD *)(_RCX + 220) = a2;
  }
  v7 = __readdr(0);
  v8 = __readdr(1u);
  *(_QWORD *)(_RCX + 32) = v7;
  *(_QWORD *)(_RCX + 40) = v8;
  v9 = __readdr(2u);
  v10 = __readdr(3u);
  *(_QWORD *)(_RCX + 48) = v9;
  *(_QWORD *)(_RCX + 56) = v10;
  v11 = __readdr(6u);
  v12 = __readdr(7u);
  *(_QWORD *)(_RCX + 64) = v11;
  *(_QWORD *)(_RCX + 72) = v12;
  result = 0LL;
  __writedr(7u, 0LL);
  if ( (BYTE2(KeGetPcr()[94].Unused3) & 2) != 0 && (v12 & 0x300) != 0 )
  {
    if ( (dword_140C2BD48 & 2) != 0 )
    {
      *(_QWORD *)(_RCX + 136) = 0LL;
      *(_QWORD *)(_RCX + 128) = 0LL;
      *(_QWORD *)(_RCX + 152) = 0LL;
      *(_QWORD *)(_RCX + 144) = 0LL;
    }
    else
    {
      v14 = _RCX;
      v15 = dword_140D06D40;
      if ( dword_140D06D40 )
      {
        v16 = __readmsr(dword_140D06D40);
        v15 = v16;
      }
      v17 = __readmsr(v15 + dword_140D06AC8);
      *(_DWORD *)(_RCX + 136) = v17;
      v18 = dword_140D06B04;
      *(_DWORD *)(v14 + 140) = HIDWORD(v17);
      *(_QWORD *)(v14 + 128) = __readmsr(v15 + v18);
      *(_QWORD *)(v14 + 152) = __readmsr(dword_140D06C20);
      *(_QWORD *)(v14 + 144) = __readmsr(dword_140D06C24);
      v19 = __readmsr(0x1D9u);
      v20 = HIDWORD(v19);
      result = (unsigned int)v19 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v20, result));
    }
  }
  return result;
}
