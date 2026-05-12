/*
 * XREFs of ?Format@SC_DRIVE_HEADER@@QEAAXPEAPEAEK@Z @ 0x1C00050EC
 * Callers:
 *     ?WriteHeader@SC_DRIVE@@QEAAJPEAVSC_DRIVE_HEADER@@@Z @ 0x1C0005474 (-WriteHeader@SC_DRIVE@@QEAAJPEAVSC_DRIVE_HEADER@@@Z.c)
 * Callees:
 *     ?Format@SC_FORMAT@@SAPEAEPEBVSC_FIELD@@KPEAXPEAE@Z @ 0x1C00051E8 (-Format@SC_FORMAT@@SAPEAEPEBVSC_FIELD@@KPEAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     RtlComputeCrc32_0 @ 0x1C000B40D (RtlComputeCrc32_0.c)
 */

void __fastcall SC_DRIVE_HEADER::Format(SC_DRIVE_HEADER *this, unsigned __int8 **a2)
{
  __int16 v2; // di
  unsigned __int8 *v3; // r9
  __int16 v5; // ax
  unsigned __int8 *v7; // rax
  __int64 v8; // r10
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rbx
  ULONG v11; // eax
  unsigned __int8 *v12; // r9
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int16 v14; // [rsp+28h] [rbp-30h]
  __int16 v15; // [rsp+2Ah] [rbp-2Eh]
  ULONG v16; // [rsp+2Ch] [rbp-2Ch]

  v2 = *((_WORD *)this + 18);
  v3 = *a2;
  v13 = 0x5350414345444220LL;
  v5 = *(_WORD *)this;
  v16 = 0;
  v14 = v5;
  v15 = 512;
  v7 = SC_FORMAT::Format((const struct SC_FIELD *)&unk_1C00123E8, 4u, &v13, v3);
  v8 = *(unsigned __int16 *)this;
  *((_WORD *)this + 18) &= word_1C0012CB8[2 * v8];
  v9 = SC_FORMAT::Format((const struct SC_FIELD *)qword_1C00122F8[2 * v8], dword_1C00122F0[4 * v8], this, v7);
  *((_WORD *)this + 18) = v2;
  v10 = v9;
  v11 = RtlComputeCrc32_0(0, *a2, 0x200u);
  v12 = *a2;
  v16 = v11;
  SC_FORMAT::Format((const struct SC_FIELD *)&unk_1C00123E8, 4u, &v13, v12);
  *a2 = v10;
}
