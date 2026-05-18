/*
 * XREFs of sub_1800491C8 @ 0x1800491C8
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18003D9EC @ 0x18003D9EC (sub_18003D9EC.c)
 *     ?GetUMSBackgroundPoller@ResourceManager@details@Concurrency@@QEAAPEAVUMSBackgroundPoller@23@XZ_0 @ 0x18004977C (-GetUMSBackgroundPoller@ResourceManager@details@Concurrency@@QEAAPEAVUMSBackgroundPoller@23@XZ_0.c)
 *     sub_180049874 @ 0x180049874 (sub_180049874.c)
 *     sub_180069248 @ 0x180069248 (sub_180069248.c)
 *     sub_180069260 @ 0x180069260 (sub_180069260.c)
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 *     sub_18009490C @ 0x18009490C (sub_18009490C.c)
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 *     sub_1800953A0 @ 0x1800953A0 (sub_1800953A0.c)
 *     sub_180096500 @ 0x180096500 (sub_180096500.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800491C8(
        Concurrency::details::ResourceManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        char a5)
{
  unsigned int v8; // ebx
  struct Concurrency::details::UMSBackgroundPoller *UMSBackgroundPoller; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 v22; // rdi
  int v23; // ecx
  bool v24; // zf
  __int64 v25; // r8
  __int64 v26; // rdx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  unsigned int i; // esi
  _QWORD *v30; // rax
  bool v31; // di
  unsigned __int8 v32; // al
  __int64 v33; // rdx
  __int64 *v34; // rdx
  __int64 *v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  __int128 v42; // [rsp+30h] [rbp-50h] BYREF
  __int128 v43; // [rsp+40h] [rbp-40h] BYREF
  __int128 v44; // [rsp+50h] [rbp-30h] BYREF
  __int128 v45; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v46[16]; // [rsp+70h] [rbp-10h] BYREF
  int v47; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v48; // [rsp+C8h] [rbp+48h]

  v48 = a2;
  LODWORD(v48) = *(_DWORD *)(*a4 + 88);
  v8 = 0;
  UMSBackgroundPoller = Concurrency::details::ResourceManager::GetUMSBackgroundPoller(a1);
  v13 = sub_180069248(*(_QWORD *)(v10 + 136), v11, v12, UMSBackgroundPoller);
  sub_180069260(v17, &v42, v14 | v13 | v15, *(unsigned int *)(v16 + 104));
  if ( sub_1800122C0(&v42) )
  {
    v18 = *a4;
    v43 = 0LL;
    v19 = *(_QWORD *)(v18 + 80);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 8);
      while ( v20 )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 1, v20);
        if ( v21 == v20 )
        {
          v43 = *(_OWORD *)(v18 + 72);
          break;
        }
      }
    }
    v22 = v42;
    sub_180094A54(v42, &v43);
    v23 = *(_DWORD *)(v22 + 128);
    if ( v23 )
    {
      if ( v23 != 1 )
        goto LABEL_41;
      v24 = *(_QWORD *)(v22 + 144) == *(_QWORD *)(v22 + 152);
    }
    else
    {
      v24 = *(_QWORD *)(v22 + 136) == 0LL;
    }
    if ( !v24 )
    {
      v25 = *a4;
      v44 = 0LL;
      v26 = *(_QWORD *)(v25 + 80);
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 + 8);
        while ( v27 )
        {
          v28 = v27;
          v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 8), v27 + 1, v27);
          if ( v28 == v27 )
          {
            v44 = *(_OWORD *)(v25 + 72);
            break;
          }
        }
      }
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)v44 + 192LL))(v44, &v47);
      sub_180010910((__int64)&v44);
      for ( i = 0; i < 6; ++i )
      {
        if ( ((1 << i) & v47) != 0 )
        {
          v30 = (_QWORD *)sub_1800953A0(v42, v46, i);
          v31 = sub_1800122C0(v30);
          sub_180010910((__int64)v46);
          if ( v31 )
            v8 |= 1 << i;
        }
      }
      v32 = sub_180049874(a1);
      sub_18009490C(v42, (_DWORD)a4, v32, v8, a5);
      sub_180091F9C(*((_QWORD *)a1 + 15), a4, v8);
      v33 = *((_QWORD *)a1 + 21);
      if ( v33 )
      {
        v34 = *(__int64 **)(v33 + 128);
        v35 = (__int64 *)v34[1];
        v36 = v34;
        while ( !*((_BYTE *)v35 + 25) )
        {
          if ( *((_DWORD *)v35 + 8) >= (unsigned int)v48 )
          {
            v36 = v35;
            v35 = (__int64 *)*v35;
          }
          else
          {
            v35 = (__int64 *)v35[2];
          }
        }
        if ( *((_BYTE *)v36 + 25) || (unsigned int)v48 < *((_DWORD *)v36 + 8) || v36 == v34 )
        {
          v37 = *a4;
          v45 = 0LL;
          v38 = *(_QWORD *)(v37 + 80);
          if ( v38 )
          {
            v39 = *(_DWORD *)(v38 + 8);
            while ( v39 )
            {
              v40 = v39;
              v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v38 + 8), v39 + 1, v39);
              if ( v40 == v39 )
              {
                v45 = *(_OWORD *)(v37 + 72);
                break;
              }
            }
          }
          sub_180096500(*((_QWORD *)a1 + 21), &v45, v37, 0LL);
          sub_180010910((__int64)&v45);
        }
        sub_18003D9EC(*a4);
      }
    }
  }
LABEL_41:
  *(_OWORD *)a2 = v42;
  v42 = 0LL;
  *(_DWORD *)(a2 + 16) = v8;
  sub_180010910((__int64)&v42);
  return a2;
}
