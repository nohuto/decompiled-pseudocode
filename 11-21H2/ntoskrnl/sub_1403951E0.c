/*
 * XREFs of sub_1403951E0 @ 0x1403951E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F27B0 @ 0x1402F27B0 (sub_1402F27B0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_140395300 @ 0x140395300 (sub_140395300.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1403951E0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  int v4; // esi
  int v5; // r9d
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-138h] BYREF
  int v12; // [rsp+38h] [rbp-130h]
  int v13; // [rsp+3Ch] [rbp-12Ch]
  _QWORD v14[34]; // [rsp+40h] [rbp-128h] BYREF

  v4 = (int)SystemArgument1;
  memset(v14, 0, sizeof(v14));
  if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
  {
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    sub_14035EDE4((__int64)&v11, 1u, 0x40020000u, 0xF56u, 0x400A02u);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14[1] = MEMORY[0xFFFFF78000000014];
  _disable();
  v7 = MEMORY[0xFFFFF78000000008];
  if ( dword_140D05038 )
  {
    if ( *((_BYTE *)CurrentPrcb + 33) )
    {
      v8 = 32272LL;
      v9 = MEMORY[0xFFFFF78000000008] >> 18;
      v10 = 2LL;
      do
      {
        *(_DWORD *)(v8 + qword_140D088C0[0]) = v9;
        v8 += 4LL;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    *((_DWORD *)CurrentPrcb + 8068) = MEMORY[0xFFFFF78000000008] >> 18;
    *((_DWORD *)CurrentPrcb + 8069) = v7 >> 18;
  }
  _enable();
  LOBYTE(v5) = 1;
  sub_140395300((_DWORD)CurrentPrcb, v4, v7, v5, (__int64)v14);
  *((_QWORD *)CurrentPrcb + 1644) = 0LL;
  if ( *((_BYTE *)CurrentPrcb + 33) )
    sub_1402F27B0((__int64)CurrentPrcb, v7, 1, 1);
}
