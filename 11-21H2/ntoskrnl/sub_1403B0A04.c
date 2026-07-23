/*
 * XREFs of sub_1403B0A04 @ 0x1403B0A04
 * Callers:
 *     sub_1403AE924 @ 0x1403AE924 (sub_1403AE924.c)
 *     sub_1403AEED4 @ 0x1403AEED4 (sub_1403AEED4.c)
 *     sub_140508F00 @ 0x140508F00 (sub_140508F00.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_140396364 @ 0x140396364 (sub_140396364.c)
 *     sub_1403B0C40 @ 0x1403B0C40 (sub_1403B0C40.c)
 *     sub_1403B0CB0 @ 0x1403B0CB0 (sub_1403B0CB0.c)
 *     sub_1403B0DA4 @ 0x1403B0DA4 (sub_1403B0DA4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1403B0A04(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // r14
  int v3; // r15d
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // r8
  _DWORD *v7; // rdx
  int v8; // eax
  int v9; // ecx
  char v11; // di
  int v12; // eax
  int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  ULONG_PTR v18; // r8
  int v19; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-28h]
  int v23; // [rsp+70h] [rbp-8h]
  unsigned int v24; // [rsp+80h] [rbp+8h] BYREF

  v24 = 0;
  LODWORD(v22) = 0;
  v21 = 0LL;
  LODWORD(v1) = HIDWORD(KeGetPcr()[1].LockArray);
  _disable();
  v3 = v23 & 0x200;
  v4 = sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 16), (unsigned int)v1);
  v5 = v4;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 594;
    v16 = 4;
LABEL_32:
    v9 = BugCheckParameter3;
LABEL_34:
    sub_14051E038(v9, v16, v4, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", BugCheckParameter4);
    goto LABEL_13;
  }
  if ( !HIDWORD(KeGetPcr()[1].LockArray) )
    dword_140C4AD4C = v24;
  sub_1403B0DA4(v24);
  v7 = (_DWORD *)(qword_140C54A80 + 24 * v1);
  if ( *v7 )
  {
    if ( !byte_140D011A0 )
    {
      if ( *(_QWORD *)(BugCheckParameter3 + 80) )
      {
        v8 = sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 16), v7);
        v6 = v8;
        if ( v8 < 0 )
        {
          sub_14051E038(
            BugCheckParameter3,
            6,
            v8,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
            805);
          KeBugCheckEx(0x5Cu, 0x200uLL, dword_140C4ADB0, BugCheckParameter3, v18);
        }
      }
    }
    goto LABEL_8;
  }
  v11 = 0;
  if ( byte_140D011A0 )
    goto LABEL_38;
  if ( !byte_140C4E840 && !byte_140C4ADB4 && (!dword_140C4EFC8 || (unsigned int)dword_140C54A90 <= dword_140C0C694) )
  {
    LODWORD(v21) = 5;
    DWORD2(v21) = 1 << v1;
    goto LABEL_22;
  }
  if ( dword_140C4AD44 >= (unsigned int)dword_140C4EFC4 || (*(_DWORD *)(BugCheckParameter3 + 228) & 8) == 0 )
  {
LABEL_38:
    DWORD2(v21) = v24;
    LODWORD(v21) = 4;
    if ( byte_140D011A0 )
      goto LABEL_39;
  }
  else
  {
    v11 = 1;
    DWORD2(v21) = dword_140C4AD44;
    HIDWORD(v21) = 1 << dword_140C4AD68;
    LODWORD(v21) = 6;
  }
LABEL_22:
  if ( *(_QWORD *)(BugCheckParameter3 + 80) )
  {
    v12 = sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 16), &v21);
    v13 = v21;
LABEL_24:
    v14 = DWORD2(v21);
    goto LABEL_25;
  }
  if ( !*(_QWORD *)(BugCheckParameter3 + 144) )
    goto LABEL_39;
  v11 = 0;
  v12 = sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 16), &v24);
  v13 = v21;
  if ( (_DWORD)v21 != 6 )
    goto LABEL_24;
  v14 = DWORD2(v21);
  if ( DWORD2(v21) >= (unsigned int)dword_140C4EFC4 )
  {
    DWORD2(v21) = v24;
    LODWORD(v21) = 4;
    goto LABEL_39;
  }
LABEL_25:
  if ( v12 < 0 )
  {
LABEL_39:
    v17 = qword_140C54A80;
    *(_DWORD *)(qword_140C54A80 + 24 * v1) = 4;
    *(_DWORD *)(v17 + 24 * v1 + 8) = v24;
LABEL_40:
    KeAddProcessorAffinityEx((unsigned __int16 *)&dword_140C4DD60, v1);
    goto LABEL_8;
  }
  byte_140C4ADA8 = 1;
  if ( v13 == 6 )
  {
    byte_140C4ADB4 = 1;
    if ( v14 > dword_140C4AD44 )
      dword_140C4AD44 = v14;
  }
  if ( v11 )
  {
    if ( ++dword_140C4AD68 >= (unsigned int)dword_140C4EFC8 )
    {
      dword_140C4AD68 = 0;
      ++dword_140C4AD44;
    }
  }
  v15 = qword_140C54A80;
  *(_OWORD *)(qword_140C54A80 + 24 * v1) = v21;
  *(_QWORD *)(v15 + 24 * v1 + 16) = v22;
  if ( (_DWORD)v21 == 4 )
    goto LABEL_40;
LABEL_8:
  v4 = sub_1403B0CB0(BugCheckParameter3, v24, v6);
  v5 = v4;
  v9 = BugCheckParameter3;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 826;
    v16 = 10;
    goto LABEL_34;
  }
  v4 = sub_1403B0C40(BugCheckParameter3, v24);
  v5 = v4;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 839;
    v16 = 38;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(BugCheckParameter3 + 228) & 2) != 0 )
    sub_14042A5E0(*(_QWORD *)(BugCheckParameter3 + 16), 0LL);
  if ( (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 224) - 3) <= 1
    && (*(_DWORD *)(BugCheckParameter3 + 232) & 1) != 0 )
  {
    v19 = sub_140396364(BugCheckParameter3, 1);
    v5 = v19;
    if ( v19 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, dword_140C4ADB0, 4uLL, v19);
  }
LABEL_13:
  if ( v3 )
    _enable();
  return v5;
}
