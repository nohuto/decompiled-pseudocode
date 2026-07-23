/*
 * XREFs of sub_1403078A0 @ 0x1403078A0
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_1402221F4 @ 0x1402221F4 (sub_1402221F4.c)
 *     sub_140222280 @ 0x140222280 (sub_140222280.c)
 *     sub_140222368 @ 0x140222368 (sub_140222368.c)
 *     sub_14022BA6C @ 0x14022BA6C (sub_14022BA6C.c)
 *     sub_1402F36BC @ 0x1402F36BC (sub_1402F36BC.c)
 *     sub_140307E90 @ 0x140307E90 (sub_140307E90.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405433C0 @ 0x1405433C0 (sub_1405433C0.c)
 *     sub_140568930 @ 0x140568930 (sub_140568930.c)
 *     sub_1405790F8 @ 0x1405790F8 (sub_1405790F8.c)
 *     sub_14062D8E4 @ 0x14062D8E4 (sub_14062D8E4.c)
 *     sub_14062D974 @ 0x14062D974 (sub_14062D974.c)
 */

void __fastcall sub_1403078A0(__int64 a1, int a2, int a3, unsigned __int8 a4, char a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // esi
  __int64 v12; // r14
  unsigned int v13; // edi
  int v14; // r15d
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  int v20; // eax
  int v21; // r12d
  ULONG_PTR v22; // rbp
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v24; // r15
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  ULONG_PTR v28; // r12
  unsigned int v29; // r13d
  __int16 v30; // cx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  ULONG_PTR v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned int BugCheckParameter3; // [rsp+78h] [rbp+10h]

  sub_140307E90();
  *(_DWORD *)(a1 + 13248) = a3;
  v11 = a3 - a2;
  if ( !v11 )
  {
    if ( dword_140D06A38 || dword_140C2B994 != 4 )
      return;
    goto LABEL_22;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    if ( !--byte_140C095E0 )
    {
      byte_140C095E0 = byte_140D05003;
      BugCheckParameter4 = (unsigned __int8)byte_140C4E931;
      v24 = qword_140D088C0[(unsigned __int8)byte_140C4E931];
      v25 = (unsigned __int8)byte_140C4E931 + 1;
      if ( v25 >= (unsigned int)dword_140D06884 )
        LOBYTE(v25) = 0;
      byte_140C4E931 = v25;
      if ( sub_1402F36BC(*(_DWORD *)(v24 + 36)) )
      {
        if ( !*(_DWORD *)(v24 + 32416) && byte_140D068E6 && (dword_140C31E20 & 3) == 0 )
        {
          sub_1405433C0(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)byte_140D05003, 0LL, v24, BugCheckParameter4);
        }
        *(_DWORD *)(v24 + 32416) = 0;
      }
    }
  }
  if ( a5 )
  {
    *(_DWORD *)(a1 + 33096) += v11;
    *(_DWORD *)(v12 + 732) += v11;
    ++*(_DWORD *)(a1 + 32492);
    sub_1402221F4(a1, v9, v10);
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 33092) += v11;
  v14 = 0;
  if ( *(_BYTE *)(a1 + 32) != 2 || !*(_BYTE *)(a1 + 13242) )
  {
    if ( *(_BYTE *)(a1 + 32) > 1u )
      *(_DWORD *)(a1 + 33104) += v11;
    else
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 652LL) += v11;
    goto LABEL_10;
  }
  ++*(_DWORD *)(a1 + 33116);
  *(_DWORD *)(a1 + 33100) += v11;
  v26 = *(_DWORD *)(a1 + 33344);
  v27 = *(_DWORD *)(a1 + 33120);
  v28 = *(unsigned int *)(a1 + 33116);
  v29 = *(_DWORD *)(a1 + 13260);
  BugCheckParameter3 = v27;
  if ( v26 )
  {
    if ( (_DWORD)v28 == v26 )
    {
      sub_14062D974(a1, *(unsigned int *)(a1 + 32492), v26, 0LL);
    }
    else if ( (unsigned int)v28 < v26 )
    {
      goto LABEL_47;
    }
    sub_140568930(a1);
    v14 = 1;
    sub_14062D8E4(*(unsigned int *)(a1 + 32492), (unsigned int)v28);
    v27 = BugCheckParameter3;
  }
LABEL_47:
  if ( v29 )
  {
    if ( (unsigned int)v28 >= v29 )
    {
      v33 = *(_QWORD *)(a1 + 13264);
      if ( v33 )
      {
        v9 = *(_QWORD *)(a1 + 13152);
        if ( v9 )
        {
          if ( *(_DWORD *)(v33 + 72) )
          {
            if ( *(_QWORD *)(v33 + 64) == *(_QWORD *)(v9 + 24) )
              *(_DWORD *)(v33 + 72) = v28;
          }
          else
          {
            *(_DWORD *)(v33 + 72) = v28;
            *(_QWORD *)(v33 + 64) = *(_QWORD *)(v9 + 24);
            sub_140345190(v33, 0);
            v27 = BugCheckParameter3;
          }
        }
      }
    }
  }
  if ( v27 && (unsigned int)v28 > v27 )
  {
    if ( byte_140D068E6 )
    {
      __rdtsc();
      sub_1405433C0(3LL, 0LL);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && !dword_140D06D3C )
      {
        __int2c();
        *(_DWORD *)(a1 + 33116) = 0;
        sub_140222280(a1);
        goto LABEL_10;
      }
      if ( dword_140C2A954 <= 0 || (_BYTE)byte_140E01841 )
        KeBugCheckEx(0x133u, 0LL, v28, BugCheckParameter3, (ULONG_PTR)&::BugCheckParameter4);
      sub_1405790F8();
    }
    *(_DWORD *)(a1 + 33116) = 0;
    sub_140222280(a1);
  }
LABEL_10:
  if ( a4 < 2u )
  {
LABEL_11:
    sub_1402221F4(a1, v9, v10);
    ++*(_DWORD *)(a1 + 32492);
    goto LABEL_12;
  }
  ++*(_DWORD *)(a1 + 32428);
  v20 = *(_DWORD *)(a1 + 32436);
  v21 = *(_DWORD *)(a1 + 32428);
  v22 = *(unsigned int *)(a1 + 32424);
  if ( v20 && !v14 )
  {
    if ( v21 == v20 )
    {
      sub_14062D974(a1, *(unsigned int *)(a1 + 32492), (unsigned int)v21, 1LL);
LABEL_64:
      sub_140568930(a1);
      sub_14062D8E4(*(unsigned int *)(a1 + 32492), (unsigned int)v21);
      goto LABEL_27;
    }
    if ( v21 >= v20 )
      goto LABEL_64;
  }
LABEL_27:
  if ( (_DWORD)v22 && v21 >= (int)v22 )
  {
    if ( byte_140D068E6 )
    {
      __rdtsc();
      sub_1405433C0(2LL, 0LL);
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || dword_140D06D3C )
        KeBugCheckEx(0x133u, 1uLL, v22, (ULONG_PTR)&::BugCheckParameter4, 0LL);
      __int2c();
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( v12 != *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 32) <= 1u
    && (*(char *)(v12 + 195) < 16
     && *(_QWORD *)(v12 + 104)
     && (v34 = *(_QWORD *)(v12 + 104)) != 0
     && (v35 = *(unsigned int *)(a1 + 216) + v34) != 0
     && (unsigned int)sub_1402103E0(v12, v35, 0LL, 0, 0LL)
     || *(char *)(v12 + 195) < 8) )
  {
    *(_DWORD *)(a1 + 33132) += v11;
  }
  if ( v11 < 8 )
  {
    *(_DWORD *)(a1 + 11684) += 15 * (*(_DWORD *)(a1 + 33088) - *(_DWORD *)(a1 + 11680));
    v13 = *(_DWORD *)(a1 + 11684);
    v15 = v11;
    do
    {
      v13 >>= 4;
      --v15;
    }
    while ( v15 );
  }
  *(_DWORD *)(a1 + 11684) = v13;
  v16 = *(_DWORD *)(a1 + 13228) - *(_DWORD *)(a1 + 13236);
  *(_DWORD *)(a1 + 11680) = *(_DWORD *)(a1 + 33088);
  v17 = *(_DWORD *)(a1 + 13148);
  *(_DWORD *)(a1 + 13228) = (unsigned int)(v17 + v16) >> v11;
  v18 = *(_DWORD *)(a1 + 13144);
  *(_DWORD *)(a1 + 13236) = v17;
  if ( !v18 || (v30 = *(_WORD *)(a1 + 13244), (v30 & 3) != 0) )
  {
    if ( (*(_DWORD *)(a1 + 33108))-- == 1 )
    {
      *(_DWORD *)(a1 + 33108) = dword_140D05098;
      v32 = *(_DWORD *)(a1 + 13224);
      if ( v32 < dword_140D05094 )
        *(_DWORD *)(a1 + 13224) = v32 + 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 33108) = dword_140D05098;
    if ( (v30 & 0xAF) == 0 )
      sub_14022BA6C((struct _KPRCB *)a1, 2);
    v31 = *(_DWORD *)(a1 + 13224);
    if ( v31 > 1 && *(_DWORD *)(a1 + 13228) < (unsigned int)dword_140D05170 )
      *(_DWORD *)(a1 + 13224) = v31 - 1;
  }
LABEL_22:
  if ( ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled) && dword_140C4E938 == *(_DWORD *)(a1 + 36) )
    sub_140222368();
}
