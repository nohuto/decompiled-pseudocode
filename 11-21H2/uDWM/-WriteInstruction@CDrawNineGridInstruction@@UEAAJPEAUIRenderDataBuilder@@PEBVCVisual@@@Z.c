/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18000C240
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        CDrawNineGridInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  int v3; // r11d
  int v5; // ebx
  int v7; // ecx
  unsigned int v8; // ebp
  int v9; // r9d
  bool v10; // sf
  int v11; // ecx
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // edx
  int v15; // r10d
  unsigned int v16; // ebx
  __int64 *i; // rdi
  __int64 v18; // r10
  __int64 v20; // rdx
  float v21; // xmm0_4
  int v22; // eax
  float v23; // xmm1_4
  __int64 (__fastcall *v24)(struct IRenderDataBuilder *, __int128 *, _QWORD); // r9
  int v25; // eax
  __int128 v26; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v27[4]; // [rsp+40h] [rbp-58h]
  _DWORD v28[4]; // [rsp+50h] [rbp-48h]

  v3 = *((_DWORD *)this + 8);
  v5 = *((_DWORD *)this + 10);
  v7 = *((_DWORD *)a3 + 33) + *((_DWORD *)this + 11);
  v8 = 0;
  v9 = v3 + *((_DWORD *)a3 + 32) + *((_DWORD *)this + 9);
  if ( v9 < 0 )
    v9 = 0;
  v10 = v5 + v7 < 0;
  v11 = v5 + v7;
  v12 = *((_QWORD *)this + 2);
  v26 = *((_OWORD *)this + 1);
  if ( v10 )
    v11 = 0;
  if ( HIDWORD(v12) + (int)v12 > v9 )
  {
    v13 = (int)v12 * v9 / (HIDWORD(v12) + (int)v12);
    LODWORD(v12) = v13;
  }
  else
  {
    v13 = v9 - HIDWORD(v12);
  }
  v14 = DWORD2(v26);
  if ( HIDWORD(v26) + DWORD2(v26) > v11 )
  {
    v15 = DWORD2(v26) * v11 / (HIDWORD(v26) + DWORD2(v26));
    v14 = v15;
  }
  else
  {
    v15 = v11 - HIDWORD(v26);
  }
  v28[1] = v14 - v5;
  v28[2] = v15 - v5;
  v28[3] = v11 - v5;
  v28[0] = -v5;
  v27[1] = v12 - v3;
  v27[2] = v13 - v3;
  v27[3] = v9 - v3;
  v16 = 0;
  v27[0] = -v3;
  for ( i = (__int64 *)((char *)this + 48); ; ++i )
  {
    v18 = *i;
    if ( *i )
    {
      v20 = v16 / 3;
      v21 = (float)(v27[v16 % 3 + 1] - v27[v16 % 3]);
      v22 = v28[(unsigned int)(v20 + 1)] - v28[v20];
      v23 = (float)(int)v27[v16 % 3];
      *((float *)&v26 + 1) = (float)(int)v28[v20];
      *(float *)&v26 = v23;
      *((float *)&v26 + 2) = v21 + v23;
      v24 = *(__int64 (__fastcall **)(struct IRenderDataBuilder *, __int128 *, _QWORD))(*(_QWORD *)a2 + 56LL);
      *((float *)&v26 + 3) = (float)v22 + *((float *)&v26 + 1);
      v25 = v24(a2, &v26, *(unsigned int *)(*(_QWORD *)(v18 + 16) + 24LL));
      v8 = v25;
      if ( v25 < 0 )
        break;
    }
    if ( ++v16 >= 9 )
      return v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x11Cu);
  return v8;
}
