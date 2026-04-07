/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x18000C440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAtlasButton::AddApproximateAtlasSize(CAtlasButton *this, unsigned int *a2)
{
  int *v2; // r10
  int v3; // r11d
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  int v10; // r8d
  int *v11; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d

  v2 = (int *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0;
    v7 = 1;
    v8 = 0;
    if ( v2[8] > 0 )
      v7 = 2;
    v9 = 1;
    if ( v2[9] > 0 )
      v8 = 1;
    v10 = v7 + v8;
    if ( v2[10] > 0 )
      v9 = 2;
    if ( v2[11] > 0 )
      v6 = 1;
    *a2 += v10 * (v9 + v6);
  }
  v11 = (int *)*((_QWORD *)this + 16);
  if ( v11 )
  {
    v12 = 0;
    v13 = 1;
    v14 = 1;
    if ( v11[8] > 0 )
      v13 = 2;
    if ( v11[9] > 0 )
      v12 = 1;
    v15 = v13 + v12;
    if ( v11[10] > 0 )
      v14 = 2;
    if ( v11[11] > 0 )
      v3 = 1;
    *a2 += v15 * (v3 + v14);
  }
}
