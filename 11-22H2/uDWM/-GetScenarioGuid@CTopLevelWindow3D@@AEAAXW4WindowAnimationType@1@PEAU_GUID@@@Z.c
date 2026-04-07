/*
 * XREFs of ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x1800564FC
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x18001F964 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::GetScenarioGuid(__int64 a1, int a2, GUID *a3)
{
  int v3; // edx
  GUID v4; // xmm0
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx

  v3 = a2 - 1;
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 6;
              if ( v10 )
              {
                if ( v10 == 1 )
                  v4 = (GUID)xmmword_180129E98;
                else
                  v4 = GUID_NULL;
              }
              else
              {
                v4 = (GUID)xmmword_180129E88;
              }
            }
            else
            {
              v4 = (GUID)xmmword_180120B88;
            }
          }
          else
          {
            v4 = (GUID)xmmword_180120BA8;
          }
        }
        else
        {
          v4 = (GUID)xmmword_180129EA8;
        }
      }
      else
      {
        v4 = (GUID)xmmword_180120B98;
      }
    }
    else
    {
      v4 = (GUID)xmmword_180129EB8;
    }
  }
  else
  {
    v4 = (GUID)xmmword_180120B78;
  }
  *a3 = v4;
}
