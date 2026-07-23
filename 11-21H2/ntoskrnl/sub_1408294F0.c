/*
 * XREFs of sub_1408294F0 @ 0x1408294F0
 * Callers:
 *     PoCreateThermalRequest @ 0x140829400 (PoCreateThermalRequest.c)
 * Callees:
 *     sub_14025A904 @ 0x14025A904 (sub_14025A904.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403C0F80 @ 0x1403C0F80 (sub_1403C0F80.c)
 *     sub_1408296B8 @ 0x1408296B8 (sub_1408296B8.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x140860CFC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14086141C @ 0x14086141C (sub_14086141C.c)
 *     sub_14098B48C @ 0x14098B48C (sub_14098B48C.c)
 *     sub_14098B980 @ 0x14098B980 (sub_14098B980.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408294F0(CMSPAddress *this, __int64 a2, char a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 Pool2; // rax
  _QWORD *v9; // rax
  int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  int v17; // eax

  v6 = 0LL;
  v7 = sub_14025A904(a2);
  if ( !v7 )
    return (unsigned int)-1073741670;
  sub_1402D66A8((ULONG_PTR)&qword_140C225E0);
  if ( *(_QWORD *)(v7 + 64) )
    goto LABEL_17;
  sub_1402935D0((ULONG_PTR)&qword_140C225E0);
  Pool2 = ExAllocatePool2(256LL, 144LL, 1819231056LL);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v9 = (_QWORD *)(Pool2 + 16);
  v9[1] = v9;
  *v9 = v9;
  v6[5] = 0LL;
  v6[4] = 0LL;
  *((_BYTE *)v6 + 66) = 100;
  v6[6] = a2;
  v10 = sub_1408296B8(v6);
  if ( v10 < 0 )
    goto LABEL_21;
  *((_BYTE *)v6 + 64) = 1;
  if ( a3 )
  {
    v10 = sub_14098B980(v6);
    if ( v10 < 0 )
      goto LABEL_21;
  }
  sub_1402D66A8((ULONG_PTR)&qword_140C225E0);
  if ( *(_QWORD *)(v7 + 64) )
  {
LABEL_17:
    if ( a3 )
    {
      v17 = sub_14098B980(*(PVOID *)(v7 + 64));
      v10 = v17;
      if ( v17 < 0 )
        goto LABEL_15;
    }
    goto LABEL_9;
  }
  v11 = (_QWORD *)qword_140C225F8;
  if ( *(__int64 **)qword_140C225F8 != &qword_140C225F0 )
    goto LABEL_24;
  *v6 = &qword_140C225F0;
  v6[1] = v11;
  *v11 = v6;
  qword_140C225F8 = (__int64)v6;
  *(_QWORD *)(v7 + 64) = v6;
  sub_14086141C(v6, qword_140011F08);
  v6 = 0LL;
LABEL_9:
  sub_1402D66A8(*(_QWORD *)(v7 + 64) + 32LL);
  v12 = *(_QWORD *)(v7 + 64);
  *((_QWORD *)this + 4) = v12;
  v13 = v12 + 16;
  v14 = *(_QWORD **)(v13 + 8);
  if ( *v14 != v13 )
LABEL_24:
    __fastfail(3u);
  *((_QWORD *)this + 1) = v14;
  *(_QWORD *)this = v13;
  *v14 = this;
  *(_QWORD *)(v13 + 8) = this;
  *((_BYTE *)this + 18) = 1;
  CMSPAddress::get_DynamicTerminalClasses(this, (struct tagVARIANT *)&stru_1400372D0);
  v15 = *((_QWORD *)this + 4);
  if ( *(_QWORD *)(v15 + 136) )
  {
    sub_1403C0F80(1);
    v15 = *((_QWORD *)this + 4);
  }
  if ( *(_QWORD *)(v15 + 128) )
    *((_BYTE *)this + 41) = 1;
  sub_1402935D0(*(_QWORD *)(v7 + 64) + 32LL);
  v10 = 0;
LABEL_15:
  sub_1402935D0((ULONG_PTR)&qword_140C225E0);
  if ( v6 )
LABEL_21:
    sub_14098B48C(v6);
  return (unsigned int)v10;
}
