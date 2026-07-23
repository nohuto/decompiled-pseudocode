/*
 * XREFs of sub_1403D4314 @ 0x1403D4314
 * Callers:
 *     sub_1403D3EE0 @ 0x1403D3EE0 (sub_1403D3EE0.c)
 * Callees:
 *     KeFindFirstSetLeftGroupAffinity @ 0x14024C330 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1403D4314(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdi
  unsigned int i; // ebx
  __int64 v4; // r13
  unsigned int v5; // eax
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  KAFFINITY Mask; // rsi
  unsigned __int64 v9; // r15
  unsigned int v10; // edi
  unsigned __int8 v11; // r14
  KAFFINITY v12; // r12
  int FirstSetRightGroupAffinity; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  bool v22; // zf
  _QWORD *v23; // rdx
  __int64 v24; // rdi
  unsigned int v25; // [rsp+20h] [rbp-60h]
  unsigned int v26; // [rsp+24h] [rbp-5Ch]
  _GROUP_AFFINITY v27; // [rsp+28h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h]
  _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h]
  _QWORD *v31; // [rsp+58h] [rbp-28h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  v1 = dword_140C50728;
  v2 = a1;
  v28 = a1;
  PreviousAffinity = 0LL;
  v25 = dword_140C50728;
  for ( i = 0; i < (unsigned __int16)word_140D05000; v2 = v28 )
  {
    v4 = *(_QWORD *)(120LL * i + qword_140C506E0 + 112);
    v30 = v4;
    v5 = *(unsigned __int16 *)(v4 + 16) / v1;
    v27 = *(_GROUP_AFFINITY *)v4;
    if ( !v5 )
      v5 = 1;
    v26 = v5;
    v6 = sub_14030B860(64LL, 8LL * v5, 0x20206D4Du, i | 0x80000000);
    v31 = v6;
    v7 = v6;
    if ( v6 )
    {
      Mask = v27.Mask;
      Affinity = 0LL;
      v9 = 0LL;
      *(_QWORD *)(v4 + 24) = v6;
      v10 = 0;
      while ( Mask )
      {
        v11 = 0;
        Affinity = 0LL;
        if ( v25 )
        {
          v12 = Affinity.Mask;
          do
          {
            if ( (v10 & 1) != 0 )
              FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v27);
            else
              FirstSetRightGroupAffinity = KeFindFirstSetLeftGroupAffinity((__int64)&v27);
            v14 = qword_140D088C0[FirstSetRightGroupAffinity];
            Affinity.Group = *(unsigned __int8 *)(v14 + 208);
            v12 |= 1LL << *(_BYTE *)(v14 + 209);
            v27.Mask &= ~v12;
            if ( !v27.Mask )
              break;
            ++v11;
          }
          while ( v11 < v25 );
          v4 = v30;
          Mask = v27.Mask;
          Affinity.Mask = v12;
          v7 = v31;
        }
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v15 = sub_1403D452C(v28, i);
        v9 += v15;
        v7[v10] = v15;
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        if ( ++v10 >= 3 )
        {
          v17 = v10 - 3;
          v18 = 0LL;
          v19 = &v7[v17];
          v20 = 3LL;
          do
          {
            v18 += *v19++;
            --v20;
          }
          while ( v20 );
          v21 = v18 / 3;
          v22 = 0;
          if ( (unsigned int)v17 >= v10 )
          {
LABEL_30:
            if ( v22 )
            {
              dword_140C296FC += v26 / v25 - v10;
              v9 = v21 * v10;
              break;
            }
          }
          else
          {
            v23 = &v7[v17];
            while ( *v23 >= v21 - v21 / 0xA )
            {
              if ( *v23 <= v21 / 0xA + v21 )
              {
                LODWORD(v17) = v17 + 1;
                ++v23;
                if ( (unsigned int)v17 < v10 )
                  continue;
              }
              v22 = (_DWORD)v17 == v10;
              goto LABEL_30;
            }
          }
        }
        if ( v10 == v26 )
          break;
      }
      v16 = v10;
      v2 = v28;
      *(_QWORD *)(v4 + 32) = v9 / v16;
    }
    if ( !*(_QWORD *)(v4 + 24) )
    {
      v27 = *(_GROUP_AFFINITY *)v4;
      KeSetSystemGroupAffinityThread(&v27, &PreviousAffinity);
      v24 = sub_1403D452C(v2, i);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      *(_QWORD *)(v4 + 32) = v24;
    }
    ++i;
    v1 = v25;
  }
}
