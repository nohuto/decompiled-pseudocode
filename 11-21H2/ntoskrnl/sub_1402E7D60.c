/*
 * XREFs of sub_1402E7D60 @ 0x1402E7D60
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_14024A0FC @ 0x14024A0FC (sub_14024A0FC.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14029E440 @ 0x14029E440 (sub_14029E440.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 *     sub_140B05434 @ 0x140B05434 (sub_140B05434.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBF80 @ 0x1402CBF80 (sub_1402CBF80.c)
 *     sub_1402E8000 @ 0x1402E8000 (sub_1402E8000.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14039FDB0 @ 0x14039FDB0 (sub_14039FDB0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     sub_14056B044 @ 0x14056B044 (sub_14056B044.c)
 */

char __fastcall sub_1402E7D60(ULONG_PTR a1, ULONG_PTR a2, unsigned int *a3, __int16 a4)
{
  char v6; // bl
  ULONG_PTR v7; // r14
  __int64 v8; // r13
  int v9; // r12d
  int v10; // edi
  int v11; // eax
  int v12; // ebp
  __int64 v13; // r12
  __int128 *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rdi
  unsigned __int8 v17; // bl
  __int64 v18; // rcx
  bool v19; // di
  char v20; // cl
  __int64 v21; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  bool v26; // zf
  char v27; // al
  int v28; // eax
  unsigned __int8 v29; // r10
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r11
  __int64 v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  __int64 v36; // r8
  int v37; // eax
  char v39; // [rsp+30h] [rbp-88h]
  int v40; // [rsp+34h] [rbp-84h]
  __int128 v41; // [rsp+40h] [rbp-78h] BYREF
  __int128 v42; // [rsp+50h] [rbp-68h] BYREF
  __int128 v43; // [rsp+60h] [rbp-58h] BYREF
  __int64 v44; // [rsp+70h] [rbp-48h]
  char v47; // [rsp+D8h] [rbp+20h]
  unsigned __int8 v48; // [rsp+D8h] [rbp+20h]

  v44 = 0LL;
  *(_QWORD *)&v41 = 0LL;
  v6 = 0;
  v43 = 0LL;
  v42 = 0LL;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = 48 * a1 - 0x220000000000LL;
  v9 = a4 & 4;
  v10 = -1073741823;
  v40 = v9 != 0 ? 4 : 0;
  v11 = sub_140313B20(v7);
  if ( v11 )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v6 = 2;
    }
    else if ( (dword_140D06880 & 0x8000) != 0 && (a4 & 8) == 0 && (v11 & 1) != 0 && *(__int64 *)(v7 + 40) >= 0 )
    {
      v6 = 2;
    }
    else if ( (dword_140D06880 & 0x20000) == 0 || (v6 = 2, (v11 & 2) == 0 || (a4 & 8) != 0) )
    {
      v6 = 4;
    }
    v12 = a4 & 2;
  }
  else
  {
    v12 = a4 & 2;
    if ( (a4 & 2) == 0 )
    {
      v6 = 4;
LABEL_10:
      v13 = a1;
      goto LABEL_11;
    }
  }
  if ( (v6 & 2) == 0 )
    goto LABEL_10;
  v47 = 17;
  *((_QWORD *)&v41 + 1) = 0LL;
  v19 = v12 != 0;
  v20 = v12 != 0;
  v39 = v12 != 0;
  if ( (dword_140D06880 & 0x20000) != 0 )
  {
    sub_14026A230();
    v20 = v12 != 0;
    v39 = v12 != 0;
    if ( (a4 & 0x100) != 0 )
    {
      v20 = v19 | 0x80;
      v39 = v19 | 0x80;
    }
  }
  v21 = 0LL;
  if ( (dword_140D06880 & 0x4000) != 0 )
  {
    if ( v12 )
    {
      v41 = v42;
    }
    else
    {
      *(_QWORD *)&v41 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
      if ( (unsigned __int64)v41 < 0xFFFF800000000000uLL )
      {
        v6 |= 8u;
        *((_QWORD *)&v41 + 1) = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 992LL);
        if ( v9 )
        {
          sub_14026C644(v8, 4);
          sub_140268998(v8);
        }
        else
        {
          v48 = sub_1402F2700(v8);
          sub_14026C644(v8, 4);
          sub_140268998(v8);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v48 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v24 = *((_QWORD *)CurrentPrcb + 4375);
                v25 = ~(unsigned __int16)(-1LL << (v48 + 1));
                v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
                *(_DWORD *)(v24 + 20) &= v25;
                if ( v26 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v48);
        }
      }
      v20 = v39;
    }
    v47 = 17;
    if ( (a4 & 0x20) != 0 )
    {
      v47 = 17;
      if ( !v9 )
      {
        v27 = sub_1402F2700(v8);
        v20 = v39;
        v47 = v27;
      }
      v21 = (((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) << 12) + (*(_DWORD *)(v8 + 8) & 0xFFF)) | 1;
    }
  }
  v13 = a1;
  v28 = sub_14056B044(a1, (unsigned int)&v41, a2, (unsigned int)&v42, v21, v20);
  v10 = v28;
  if ( v28 < 0 )
    KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v28);
  v29 = v47;
  if ( v47 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = *((_QWORD *)v31 + 4375);
          v33 = ~(unsigned __int16)(-1LL << (v47 + 1));
          v26 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
          *(_DWORD *)(v32 + 20) &= v33;
          if ( v26 )
          {
            sub_140418E4C(v31);
            v29 = v47;
          }
        }
      }
    }
    __writecr8(v29);
  }
  if ( (dword_140D06880 & 0x20000) != 0 && !v12 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
  {
    v10 = sub_14039FDB0(a1, &v41, 4LL);
    if ( v10 < 0 )
      KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
  }
LABEL_11:
  LOBYTE(v14) = (*(_QWORD *)(v7 + 40) >> 60) & 7;
  if ( (_BYTE)v14 == 3 )
  {
    if ( v12 )
      LOBYTE(v14) = sub_14023CC50(v7, v40);
    if ( (v6 & 4) == 0 )
    {
      LOBYTE(v14) = (*(_QWORD *)(v8 + 40) >> 60) & 7;
      if ( (_BYTE)v14 != 3 )
        LOBYTE(v14) = sub_14026C644(v8, v40);
    }
  }
  if ( v10 < 0 )
  {
    v15 = *(unsigned __int8 *)(v7 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != v15 )
      sub_140267E78(v8, v15, 0);
    if ( !a3 )
    {
      if ( (a4 & 1) != 0 )
        v6 = 1;
      a3 = (unsigned int *)&v43;
      sub_1402E8000(v6 & 1, 2LL, &v43);
    }
    v16 = (__int64)sub_1402CBF80(a3, v13, a2);
    sub_140424FF0(v16 << 25 >> 16, (v16 << 25 >> 16) + 4096);
    if ( (unsigned int)sub_140317A80(v16) && (unsigned int)sub_140229550() )
    {
      *(_QWORD *)v16 = 0LL;
      sub_1402294F0(v16, 0LL);
    }
    else
    {
      *(_QWORD *)v16 = 0LL;
    }
    if ( (unsigned int)sub_140317A80(v16 + 8) && (unsigned int)sub_140229550() )
    {
      *(_QWORD *)(v16 + 8) = 0LL;
      sub_1402294F0(v16 + 8, 0LL);
    }
    else
    {
      *(_QWORD *)(v16 + 8) = 0LL;
    }
    v14 = &v43;
    if ( a3 == (unsigned int *)&v43 )
    {
      v17 = *((_BYTE *)a3 + 8);
      if ( v17 == 17 )
      {
        LOBYTE(v14) = sub_1402BB6D0((__int64)&qword_140C534C0, *((_QWORD **)a3 + 2), a3[1]);
      }
      else
      {
        v18 = *((_QWORD *)KeGetCurrentPrcb() + 4199);
        if ( v18 )
        {
          *(_QWORD *)(v18 + 12344) = 0LL;
          v17 = *((_BYTE *)a3 + 8);
        }
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v34 = KeGetCurrentIrql();
            if ( v34 <= 0xFu && v17 <= 0xFu && v34 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v36 = *((_QWORD *)v35 + 4375);
              v37 = ~(unsigned __int16)(-1LL << (v17 + 1));
              v26 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
              *(_DWORD *)(v36 + 20) &= v37;
              if ( v26 )
                sub_140418E4C(v35);
            }
          }
        }
        LOBYTE(v14) = v17;
        __writecr8(v17);
      }
    }
  }
  return (char)v14;
}
