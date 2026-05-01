/*
 * XREFs of ?GetWidthForHeight@CSwitchItemElement@@UEAAHH@Z @ 0x1804ACC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwitchItemElement::GetWidthForHeight(CSwitchItemElement *this, int a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = (int)(fmin(
               (double)*((int *)this + 16) / (double)*((int *)this + 17) * *((double *)this + 6),
               (double)*((int *)this + 14) / (double)*((int *)this + 15))
           * (double)(a2 - *((_DWORD *)this + 8)));
  if ( v3 >= *((_DWORD *)this + 14) )
    v3 = *((_DWORD *)this + 14);
  v4 = *((_DWORD *)this + 9);
  if ( v3 > v4 )
    v4 = v3;
  return (unsigned int)(v4 + *((_DWORD *)this + 10));
}
