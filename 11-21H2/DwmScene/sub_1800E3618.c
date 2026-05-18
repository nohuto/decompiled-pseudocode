/*
 * XREFs of sub_1800E3618 @ 0x1800E3618
 * Callers:
 *     sub_1800E62C8 @ 0x1800E62C8 (sub_1800E62C8.c)
 * Callees:
 *     sub_180021780 @ 0x180021780 (sub_180021780.c)
 */

__int64 *__fastcall sub_1800E3618(__int64 *a1, unsigned int *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rbx
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 *v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // rax
  __int64 *v39; // rax

  v4 = sub_180021780(a1, (__int64)"{");
  v5 = sub_180021780(v4, (__int64)"Width");
  v6 = sub_180021780(v5, (__int64)"=");
  v7 = (__int64 *)std::ostream::operator<<(v6, *a2);
  v8 = sub_180021780(v7, (__int64)",Height");
  v9 = sub_180021780(v8, (__int64)"=");
  v10 = (__int64 *)std::ostream::operator<<(v9, a2[1]);
  v11 = sub_180021780(v10, (__int64)",ArraySize");
  v12 = sub_180021780(v11, (__int64)"=");
  v13 = (__int64 *)std::ostream::operator<<(v12, a2[3]);
  v14 = sub_180021780(v13, (__int64)",Format");
  v15 = sub_180021780(v14, (__int64)"=");
  v16 = (__int64 *)std::ostream::operator<<(v15, a2[4]);
  v17 = sub_180021780(v16, (__int64)",SampleDesc");
  v18 = sub_180021780(v17, (__int64)"=");
  v19 = sub_180021780(v18, (__int64)"{");
  v20 = sub_180021780(v19, (__int64)"Count");
  v21 = sub_180021780(v20, (__int64)"=");
  v22 = (__int64 *)std::ostream::operator<<(v21, a2[5]);
  v23 = sub_180021780(v22, (__int64)",Quality");
  v24 = sub_180021780(v23, (__int64)"=");
  v25 = (__int64 *)std::ostream::operator<<(v24, a2[6]);
  v26 = sub_180021780(v25, (__int64)",");
  sub_180021780(v26, (__int64)"}");
  v27 = sub_180021780(v18, (__int64)",Usage");
  v28 = sub_180021780(v27, (__int64)"=");
  v29 = (__int64 *)std::ostream::operator<<(v28, a2[7]);
  v30 = sub_180021780(v29, (__int64)",BindFlags");
  v31 = sub_180021780(v30, (__int64)"=");
  v32 = (__int64 *)std::ostream::operator<<(v31, a2[8]);
  v33 = sub_180021780(v32, (__int64)",CPUAccessFlags");
  v34 = sub_180021780(v33, (__int64)"=");
  v35 = (__int64 *)std::ostream::operator<<(v34, a2[9]);
  v36 = sub_180021780(v35, (__int64)",MiscFlags");
  v37 = sub_180021780(v36, (__int64)"=");
  v38 = (__int64 *)std::ostream::operator<<(v37, a2[10]);
  v39 = sub_180021780(v38, (__int64)",");
  sub_180021780(v39, (__int64)"}");
  return a1;
}
