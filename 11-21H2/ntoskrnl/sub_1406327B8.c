/*
 * XREFs of sub_1406327B8 @ 0x1406327B8
 * Callers:
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406324DC @ 0x1406324DC (sub_1406324DC.c)
 */

void __fastcall sub_1406327B8(int a1, __int64 a2, int a3, unsigned int a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v8; // r14
  char v9; // al
  __int16 v10; // r12
  signed __int64 v11; // rax
  signed __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned int v15; // ecx
  char v16; // [rsp+30h] [rbp-39h]
  _QWORD v18[3]; // [rsp+40h] [rbp-29h] BYREF
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  __int64 v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  unsigned int v23; // [rsp+6Ch] [rbp+3h]
  _QWORD *v24; // [rsp+70h] [rbp+7h] BYREF
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = __rdtsc();
  v9 = *((_BYTE *)CurrentPrcb + 209);
  ++*((_DWORD *)CurrentPrcb + 8796);
  v10 = *((unsigned __int8 *)CurrentPrcb + 208);
  v16 = v9;
  if ( *((_QWORD *)KeGetCurrentThread() + 188) )
  {
    v11 = sub_1406324DC(a2, a1 & 0xFFFF0000);
    v12 = v11;
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 32) )
      {
        ++*((_DWORD *)CurrentPrcb + 8797);
        if ( *(_DWORD *)(v11 + 36) < (unsigned int)(a3 + 1) )
          *(_DWORD *)(v11 + 36) = a3 + 1;
        if ( ((a1 - 65570) & 0xFFFFFFDF) != 0 )
        {
          if ( ((a1 - 65586) & 0xFFFFFFDF) == 0 )
            *(_DWORD *)(v11 + 32) = 2;
          return;
        }
        v13 = *(_QWORD *)(v11 + 8);
        if ( v13 > 2 && *(_WORD *)(v12 + 24) == v10 && *(_BYTE *)(v12 + 26) == v16 )
          v14 = v8 - v13;
        else
          v14 = 0LL;
        if ( *(_QWORD *)v12 > 1uLL
          && !((*((_DWORD *)CurrentPrcb + 8763) + *((_DWORD *)CurrentPrcb + 8764)) % (unsigned int)dword_140C0DA44)
          || (v15 = *(_DWORD *)(v12 + 44), a4 > v15) && !((a4 - v15) % dword_140C0DA44)
          || !((*((_DWORD *)CurrentPrcb + 8763) + *((_DWORD *)CurrentPrcb + 8764)) % (unsigned int)dword_140C0DA48) )
        {
          v21 = a2;
          v22 = a1;
          v18[0] = *(_QWORD *)(v12 + 8);
          v19 = *(_DWORD *)(v12 + 36);
          v18[1] = v14;
          v18[2] = *(_QWORD *)v12;
          v23 = a4 - *(_DWORD *)(v12 + 44);
          v26 = 0;
          v25 = 48;
          v20 = *((_DWORD *)KeGetCurrentThread() + 308);
          v24 = v18;
          sub_14035EDE4((__int64)&v24, 1u, 0x20020000u, 0x52Bu, 0x1501802u);
        }
      }
      *(_DWORD *)(v12 + 28) = 0;
    }
  }
}
