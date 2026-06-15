/*
 * XREFs of ?IsValidProperty@CAudioSessionPropertyStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x18003D158
 * Callers:
 *     _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x18003BBA4 (_lambda_27a4ba88670a0d404d45da27056d59bf_--operator().c)
 *     ?SetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x18003E990 (-SetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioSessionPropertyStore::IsValidProperty(
        CAudioSessionPropertyStore *this,
        const struct tagPROPVARIANT *a2)
{
  unsigned int vt; // ecx
  bool v3; // zf
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx

  vt = a2->vt;
  if ( vt <= 0x46 )
  {
    if ( vt == 70 )
      return 1;
    if ( vt <= 0x12 )
    {
      if ( vt == 18 )
        return 1;
      if ( vt <= 7 )
      {
        if ( vt == 7 || !a2->vt )
          return 1;
        v4 = vt - 2;
        v3 = v4 == 0;
        goto LABEL_9;
      }
      v10 = vt - 8;
      if ( !v10 )
        return 1;
      v11 = v10 - 2;
      if ( !v11 )
        return 1;
      v12 = v11 - 1;
      if ( !v12 )
        return 1;
      v13 = v12 - 3;
      if ( v13 )
      {
        v8 = v13 - 2;
        v7 = v8 == 0;
LABEL_13:
        if ( !v7 )
          return v8 == 1;
        return 1;
      }
      return 0;
    }
    if ( vt > 0x40 )
    {
      return vt == 65;
    }
    else
    {
      if ( vt == 64 )
        return 1;
      if ( vt <= 0x18 )
      {
        if ( vt != 24 )
        {
          v4 = vt - 19;
          v3 = v4 == 0;
LABEL_9:
          if ( v3 )
            return 1;
          v5 = v4 - 1;
          if ( !v5 )
            return 1;
          v6 = v5 - 1;
          if ( !v6 )
            return 1;
          v8 = v6 - 1;
          v7 = v8 == 0;
          goto LABEL_13;
        }
        return 0;
      }
      v14 = vt - 25;
      if ( !v14 )
        return 0;
      v15 = v14 - 5;
      if ( !v15 )
        return 1;
      return v15 == 1;
    }
  }
  return vt == 8196;
}
